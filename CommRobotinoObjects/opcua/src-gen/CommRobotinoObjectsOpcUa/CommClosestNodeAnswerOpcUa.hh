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

#include "CommRobotinoObjects/CommClosestNodeAnswer.hh"
#include <SeRoNet/CommunicationObjects/Description/SelfDescription.hpp>
#include <SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#pragma once

#include "CommBasicObjects/CommPosition3dOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
// serialization for CommClosestNodeAnswer
template <>
ComplexType::shp_t SelfDescription(CommRobotinoObjects::CommClosestNodeAnswer *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	/// \todo check for ComplexObjects
	// add node_id
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementInt32(
				"node_id",
				std::bind(&CommRobotinoObjects::CommClosestNodeAnswer::getNode_id, obj),
				std::bind(&CommRobotinoObjects::CommClosestNodeAnswer::setNode_id, obj, std::placeholders::_1)
			)
		)
	);
	ret->add(
		SelfDescription(&(obj->getPosition()), "CommPosition3d")
	);
	// add distance
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"distance",
				std::bind(&CommRobotinoObjects::CommClosestNodeAnswer::getDistance, obj),
				std::bind(&CommRobotinoObjects::CommClosestNodeAnswer::setDistance, obj, std::placeholders::_1)
			)
		)
	);
	// add valid
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementBool(
				"valid",
				std::bind(&CommRobotinoObjects::CommClosestNodeAnswer::getValid, obj),
				std::bind(&CommRobotinoObjects::CommClosestNodeAnswer::setValid, obj, std::placeholders::_1)
			)
		)
	);
	return ret;
} // end SelfDescription
} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
