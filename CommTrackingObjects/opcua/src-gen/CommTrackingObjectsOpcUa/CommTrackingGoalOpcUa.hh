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

#include "CommTrackingObjects/CommTrackingGoal.hh"
#include <SeRoNet/CommunicationObjects/Description/SelfDescription.hpp>
#include <SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#pragma once


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
// serialization for CommTrackingGoal
template <>
ComplexType::shp_t SelfDescription(CommTrackingObjects::CommTrackingGoal *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	/// \todo check for ComplexObjects
	ret->add(
		SelfDescription(&(obj->getTrackingType()), "TrackingGoalType")
	);
	// add angle
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"angle",
				std::bind(&CommTrackingObjects::CommTrackingGoal::getAngle, obj),
				std::bind(&CommTrackingObjects::CommTrackingGoal::setAngle, obj, std::placeholders::_1)
			)
		)
	);
	// add distance
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"distance",
				std::bind(&CommTrackingObjects::CommTrackingGoal::getDistance, obj),
				std::bind(&CommTrackingObjects::CommTrackingGoal::setDistance, obj, std::placeholders::_1)
			)
		)
	);
	// add x
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"x",
				std::bind(&CommTrackingObjects::CommTrackingGoal::getX, obj),
				std::bind(&CommTrackingObjects::CommTrackingGoal::setX, obj, std::placeholders::_1)
			)
		)
	);
	// add y
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"y",
				std::bind(&CommTrackingObjects::CommTrackingGoal::getY, obj),
				std::bind(&CommTrackingObjects::CommTrackingGoal::setY, obj, std::placeholders::_1)
			)
		)
	);
	// add isValid
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementBool(
				"isValid",
				std::bind(&CommTrackingObjects::CommTrackingGoal::getIsValid, obj),
				std::bind(&CommTrackingObjects::CommTrackingGoal::setIsValid, obj, std::placeholders::_1)
			)
		)
	);
	// add cov
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"cov",
				std::bind(&CommTrackingObjects::CommTrackingGoal::getCov, obj),
				std::bind(&CommTrackingObjects::CommTrackingGoal::setCov, obj, std::placeholders::_1)
			)
		)
	);
	return ret;
} // end SelfDescription
} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
