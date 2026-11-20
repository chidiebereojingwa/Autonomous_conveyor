#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to conveyor_interfaces__msg__BoxState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BoxState::default())
  }
}

impl rosidl_runtime_rs::Message for BoxState {
  type RmwMsg = super::msg::rmw::BoxState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        box_count: msg.box_count,
        overload: msg.overload,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      box_count: msg.box_count,
      overload: msg.overload,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      box_count: msg.box_count,
      overload: msg.overload,
    }
  }
}


// Corresponds to conveyor_interfaces__msg__BeltCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BeltCommand::default())
  }
}

impl rosidl_runtime_rs::Message for BeltCommand {
  type RmwMsg = super::msg::rmw::BeltCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        speed: msg.speed,
        stop: msg.stop,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      speed: msg.speed,
      stop: msg.stop,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      speed: msg.speed,
      stop: msg.stop,
    }
  }
}


// Corresponds to conveyor_interfaces__msg__SystemAlert

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemAlert {

    // This member is not documented.
    #[allow(missing_docs)]
    pub level: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SystemAlert {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SystemAlert::default())
  }
}

impl rosidl_runtime_rs::Message for SystemAlert {
  type RmwMsg = super::msg::rmw::SystemAlert;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        level: msg.level.as_str().into(),
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        level: msg.level.as_str().into(),
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      level: msg.level.to_string(),
      message: msg.message.to_string(),
    }
  }
}


