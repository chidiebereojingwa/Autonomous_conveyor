# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target conveyor_interfaces::conveyor_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${conveyor_interfaces_TARGETS}.
if(conveyor_interfaces_TARGETS AND NOT TARGET conveyor_interfaces::conveyor_interfaces)
  add_library(conveyor_interfaces::conveyor_interfaces INTERFACE IMPORTED)
  set_target_properties(conveyor_interfaces::conveyor_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${conveyor_interfaces_TARGETS}")
endif()
