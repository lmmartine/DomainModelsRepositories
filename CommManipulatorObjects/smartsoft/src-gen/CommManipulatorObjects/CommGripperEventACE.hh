//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMMANIPULATOROBJECTS_COMMGRIPPEREVENT_ACE_H_
#define COMMMANIPULATOROBJECTS_COMMGRIPPEREVENT_ACE_H_

#include "CommManipulatorObjects/CommGripperEvent.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommGripperEvent
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommManipulatorObjectsIDL::CommGripperEvent &data);

// de-serialization operator for DataStructure CommGripperEvent
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommManipulatorObjectsIDL::CommGripperEvent &data);

// serialization operator for CommunicationObject CommGripperEvent
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommManipulatorObjects::CommGripperEvent &obj);

// de-serialization operator for CommunicationObject CommGripperEvent
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommManipulatorObjects::CommGripperEvent &obj);

#endif /* COMMMANIPULATOROBJECTS_COMMGRIPPEREVENT_ACE_H_ */