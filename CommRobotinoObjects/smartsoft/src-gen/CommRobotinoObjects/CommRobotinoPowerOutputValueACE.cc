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
#include "CommRobotinoObjects/CommRobotinoPowerOutputValueACE.hh"
#include <ace/SString.h>

// serialization operator for element CommRobotinoPowerOutputValue
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjectsIDL::CommRobotinoPowerOutputValue &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element value
	good_bit = good_bit && cdr.write_float(data.value);
	
	return good_bit;
}

// de-serialization operator for element CommRobotinoPowerOutputValue
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjectsIDL::CommRobotinoPowerOutputValue &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element value
	good_bit = good_bit && cdr.read_float(data.value);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommRobotinoPowerOutputValue
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjects::CommRobotinoPowerOutputValue &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommRobotinoPowerOutputValue
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjects::CommRobotinoPowerOutputValue &obj)
{
	return cdr >> obj.set();
}
