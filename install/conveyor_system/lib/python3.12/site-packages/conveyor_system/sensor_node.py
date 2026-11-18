from numpy import int32
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
from rclpy.qos import QoSProfile, ReliabilityPolicy
import random

class SensorNode(Node):
    def __init__(self):
        super().__init__('sensor_node')
        qos_profile = QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT)
        self.publisher_ = self.create_publisher(Int32, '/box_count', qos_profile)
        timer_period = 1.0  # seconds
        self.timer = self.create_timer(timer_period, self.publish_box_count)
        self.get_logger().info('Sensor node has been started.')

    def publish_box_count(self):
        box_count = random.randint(0, 10)  # Simulated box count
        msg = Int32()
        msg.data = box_count
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: {box_count}')
        
def main(args=None):
    rclpy.init(args=args)
    sensor_node = SensorNode()
    rclpy.spin(sensor_node)
    sensor_node.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()