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

#include "CommTrackingObjects/CommLaserTrackedObject.hh"
#include <SeRoNet/CommunicationObjects/Description/SelfDescription.hpp>
#include <SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#pragma once


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
// serialization for CommLaserTrackedObject
template <>
ComplexType::shp_t SelfDescription(CommTrackingObjects::CommLaserTrackedObject *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	/// \todo check for ComplexObjects
	// add id
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementUInt32(
				"id",
				std::bind(&CommTrackingObjects::CommLaserTrackedObject::getId, obj),
				std::bind(&CommTrackingObjects::CommLaserTrackedObject::setId, obj, std::placeholders::_1)
			)
		)
	);
	// add first_point
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementUInt16(
				"first_point",
				std::bind(&CommTrackingObjects::CommLaserTrackedObject::getFirst_point, obj),
				std::bind(&CommTrackingObjects::CommLaserTrackedObject::setFirst_point, obj, std::placeholders::_1)
			)
		)
	);
	// add last_point
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementUInt16(
				"last_point",
				std::bind(&CommTrackingObjects::CommLaserTrackedObject::getLast_point, obj),
				std::bind(&CommTrackingObjects::CommLaserTrackedObject::setLast_point, obj, std::placeholders::_1)
			)
		)
	);
	return ret;
} // end SelfDescription
} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
