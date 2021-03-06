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
#include "DomainVision/CommVideoImageACE.hh"
#include <ace/SString.h>
#include "DomainVision/ImageParametersACE.hh"
#include "CommBasicObjects/CommBaseStateACE.hh"
#include "CommBasicObjects/CommPose3dACE.hh"
#include "DomainVision/enumImageDistortionModelData.hh"

// serialization operator for element CommVideoImage
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainVisionIDL::CommVideoImage &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element parameter
	good_bit = good_bit && cdr << data.parameter;
	// serialize list-element data
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.data.size());
	good_bit = good_bit && cdr.write_octet_array(data.data.data(), data.data.size());
	// serialize list-element sensor_pose
	good_bit = good_bit && cdr << data.sensor_pose;
	// serialize list-element base_state
	good_bit = good_bit && cdr << data.base_state;
	// serialize list-element is_valid
	good_bit = good_bit && cdr.write_boolean(data.is_valid);
	// serialize list-element seq_count
	good_bit = good_bit && cdr.write_ulong(data.seq_count);
	// serialize list-element intrinsic_m
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.intrinsic_m.size());
	good_bit = good_bit && cdr.write_double_array(data.intrinsic_m.data(), data.intrinsic_m.size());
	// serialize list-element distortion_m
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.distortion_m.size());
	good_bit = good_bit && cdr.write_double_array(data.distortion_m.data(), data.distortion_m.size());
	// serialize list-element distortion_model
	good_bit = good_bit && cdr.write_long(data.distortion_model);
	
	return good_bit;
}

// de-serialization operator for element CommVideoImage
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainVisionIDL::CommVideoImage &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element parameter
	good_bit = good_bit && cdr >> data.parameter;
	// deserialize list-type element data
	ACE_CDR::ULong data_dataNbr;
	good_bit = good_bit && cdr >> data_dataNbr;
	data.data.resize(data_dataNbr);
	good_bit = good_bit && cdr.read_octet_array(data.data.data(), data_dataNbr);
	// deserialize type element sensor_pose
	good_bit = good_bit && cdr >> data.sensor_pose;
	// deserialize type element base_state
	good_bit = good_bit && cdr >> data.base_state;
	// deserialize type element is_valid
	good_bit = good_bit && cdr.read_boolean(data.is_valid);
	// deserialize type element seq_count
	good_bit = good_bit && cdr.read_ulong(data.seq_count);
	// deserialize list-type element intrinsic_m
	ACE_CDR::ULong data_intrinsic_mNbr;
	good_bit = good_bit && cdr >> data_intrinsic_mNbr;
	data.intrinsic_m.resize(data_intrinsic_mNbr);
	good_bit = good_bit && cdr.read_double_array(data.intrinsic_m.data(), data_intrinsic_mNbr);
	// deserialize list-type element distortion_m
	ACE_CDR::ULong data_distortion_mNbr;
	good_bit = good_bit && cdr >> data_distortion_mNbr;
	data.distortion_m.resize(data_distortion_mNbr);
	good_bit = good_bit && cdr.read_double_array(data.distortion_m.data(), data_distortion_mNbr);
	// deserialize type element distortion_model
	good_bit = good_bit && cdr.read_long(data.distortion_model);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommVideoImage
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainVision::CommVideoImage &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommVideoImage
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainVision::CommVideoImage &obj)
{
	return cdr >> obj.set();
}
