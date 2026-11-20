#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "conveyor_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__conveyor_interfaces__msg__BoxState() -> *const std::ffi::c_void;
}

#[link(name = "conveyor_interfaces__rosidl_generator_c")]
extern "C" {
    fn conveyor_interfaces__msg__BoxState__init(msg: *mut BoxState) -> bool;
    fn conveyor_interfaces__msg__BoxState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BoxState>, size: usize) -> bool;
    fn conveyor_interfaces__msg__BoxState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BoxState>);
    fn conveyor_interfaces__msg__BoxState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BoxState>, out_seq: *mut rosidl_runtime_rs::Sequence<BoxState>) -> bool;
}

// Corresponds to conveyor_interfaces__msg__BoxState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BoxState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub box_count: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub overload: bool,

}



impl Default for BoxState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !conveyor_interfaces__msg__BoxState__init(&mut msg as *mut _) {
        panic!("Call to conveyor_interfaces__msg__BoxState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BoxState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { conveyor_interfaces__msg__BoxState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { conveyor_interfaces__msg__BoxState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { conveyor_interfaces__msg__BoxState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BoxState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BoxState where Self: Sized {
  const TYPE_NAME: &'static str = "conveyor_interfaces/msg/BoxState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__conveyor_interfaces__msg__BoxState() }
  }
}


#[link(name = "conveyor_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__conveyor_interfaces__msg__BeltCommand() -> *const std::ffi::c_void;
}

#[link(name = "conveyor_interfaces__rosidl_generator_c")]
extern "C" {
    fn conveyor_interfaces__msg__BeltCommand__init(msg: *mut BeltCommand) -> bool;
    fn conveyor_interfaces__msg__BeltCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BeltCommand>, size: usize) -> bool;
    fn conveyor_interfaces__msg__BeltCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BeltCommand>);
    fn conveyor_interfaces__msg__BeltCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BeltCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<BeltCommand>) -> bool;
}

// Corresponds to conveyor_interfaces__msg__BeltCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BeltCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub speed: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stop: bool,

}



impl Default for BeltCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !conveyor_interfaces__msg__BeltCommand__init(&mut msg as *mut _) {
        panic!("Call to conveyor_interfaces__msg__BeltCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BeltCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { conveyor_interfaces__msg__BeltCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { conveyor_interfaces__msg__BeltCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { conveyor_interfaces__msg__BeltCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BeltCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BeltCommand where Self: Sized {
  const TYPE_NAME: &'static str = "conveyor_interfaces/msg/BeltCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__conveyor_interfaces__msg__BeltCommand() }
  }
}


#[link(name = "conveyor_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__conveyor_interfaces__msg__SystemAlert() -> *const std::ffi::c_void;
}

#[link(name = "conveyor_interfaces__rosidl_generator_c")]
extern "C" {
    fn conveyor_interfaces__msg__SystemAlert__init(msg: *mut SystemAlert) -> bool;
    fn conveyor_interfaces__msg__SystemAlert__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SystemAlert>, size: usize) -> bool;
    fn conveyor_interfaces__msg__SystemAlert__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SystemAlert>);
    fn conveyor_interfaces__msg__SystemAlert__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SystemAlert>, out_seq: *mut rosidl_runtime_rs::Sequence<SystemAlert>) -> bool;
}

// Corresponds to conveyor_interfaces__msg__SystemAlert
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemAlert {

    // This member is not documented.
    #[allow(missing_docs)]
    pub level: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SystemAlert {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !conveyor_interfaces__msg__SystemAlert__init(&mut msg as *mut _) {
        panic!("Call to conveyor_interfaces__msg__SystemAlert__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SystemAlert {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { conveyor_interfaces__msg__SystemAlert__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { conveyor_interfaces__msg__SystemAlert__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { conveyor_interfaces__msg__SystemAlert__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SystemAlert {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SystemAlert where Self: Sized {
  const TYPE_NAME: &'static str = "conveyor_interfaces/msg/SystemAlert";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__conveyor_interfaces__msg__SystemAlert() }
  }
}


