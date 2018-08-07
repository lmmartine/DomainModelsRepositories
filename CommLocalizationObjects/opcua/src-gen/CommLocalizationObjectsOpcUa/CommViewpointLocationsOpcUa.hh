//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Christian Schlegel (schlegel@hs-ulm.de)
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

#include "CommLocalizationObjects/CommViewpointLocations.hh"
#include <SeRoNet/CommunicationObjects/Description/SelfDescription.hpp>
#include <SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#pragma once

#include "CommLocalizationObjects/ViewpointLocationOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
// serialization for CommViewpointLocations
template <>
ComplexType::shp_t SelfDescription(CommLocalizationObjects::CommViewpointLocations *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	/// \todo check for ComplexObjects
	ret->add(
		SelfDescription(&(obj->getDatabase()), "ViewpointLocation")
	);
	return ret;
} // end SelfDescription
} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet