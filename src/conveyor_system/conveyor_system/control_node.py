import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32, Float32
from rclpy.qos import QoSProfile, ReliabilityPolicy
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor


class ControlNode(Node):
    def __init__(self):
        super().__init__('control_node')
        qos_profile = QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT)
        self.callback_group = ReentrantCallbackGroup()

        self.box_count_subscriber = self.create_subscription(
            Int32, '/box_count', self.box_count_callback, qos_profile,
            callback_group=self.callback_group,
        )
        self.speed_publisher = self.create_publisher(Float32, '/conveyor_speed', qos_profile)
        self.get_logger().info('Control node has been started.')

    def box_count_callback(self, msg):
        box_count = msg.data
        speed_msg = Float32()
        speed_msg.data = self.calculate_conveyor_speed(box_count)
        self.speed_publisher.publish(speed_msg)
        self.get_logger().info(
            f'Received box count: {box_count}, Publishing conveyor speed: {speed_msg.data}'
        )

    def calculate_conveyor_speed(self, box_count):
        if box_count < 3:
            return 1.0  # Slow
        elif box_count < 7:
            return 2.0  # Medium
        else:
            return 3.0  # Fast


def main(args=None):
    rclpy.init(args=args)
    control_node = ControlNode()
    executor = MultiThreadedExecutor()
    executor.add_node(control_node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        executor.shutdown()
        control_node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()