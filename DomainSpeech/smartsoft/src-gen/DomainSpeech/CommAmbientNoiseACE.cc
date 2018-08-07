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
#include "DomainSpeech/CommAmbientNoiseACE.hh"
#include <ace/SString.h>

// serialization operator for element CommAmbientNoise
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainSpeechIDL::CommAmbientNoise &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element noise_level
	good_bit = good_bit && cdr.write_ulong(data.noise_level);
	
	return good_bit;
}

// de-serialization operator for element CommAmbientNoise
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainSpeechIDL::CommAmbientNoise &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element noise_level
	good_bit = good_bit && cdr.read_ulong(data.noise_level);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommAmbientNoise
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainSpeech::CommAmbientNoise &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommAmbientNoise
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainSpeech::CommAmbientNoise &obj)
{
	return cdr >> obj.set();
}
