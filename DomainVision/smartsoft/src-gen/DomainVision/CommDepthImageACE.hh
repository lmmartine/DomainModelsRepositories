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
#ifndef DOMAINVISION_COMMDEPTHIMAGE_ACE_H_
#define DOMAINVISION_COMMDEPTHIMAGE_ACE_H_

#include "DomainVision/CommDepthImage.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommDepthImage
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainVisionIDL::CommDepthImage &data);

// de-serialization operator for DataStructure CommDepthImage
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainVisionIDL::CommDepthImage &data);

// serialization operator for CommunicationObject CommDepthImage
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainVision::CommDepthImage &obj);

// de-serialization operator for CommunicationObject CommDepthImage
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainVision::CommDepthImage &obj);

#endif /* DOMAINVISION_COMMDEPTHIMAGE_ACE_H_ */
