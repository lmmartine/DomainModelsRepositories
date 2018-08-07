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

#include "CommBasicObjects/CommPosition3d.hh"
#include <SeRoNet/CommunicationObjects/Description/SelfDescription.hpp>
#include <SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#pragma once


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
// serialization for CommPosition3d
template <>
ComplexType::shp_t SelfDescription(CommBasicObjects::CommPosition3d *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	/// \todo check for ComplexObjects
	// add x
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"x",
				std::bind(&CommBasicObjects::CommPosition3d::getX, obj),
				std::bind(&CommBasicObjects::CommPosition3d::setX, obj, std::placeholders::_1)
			)
		)
	);
	// add y
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"y",
				std::bind(&CommBasicObjects::CommPosition3d::getY, obj),
				std::bind(&CommBasicObjects::CommPosition3d::setY, obj, std::placeholders::_1)
			)
		)
	);
	// add z
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"z",
				std::bind(&CommBasicObjects::CommPosition3d::getZ, obj),
				std::bind(&CommBasicObjects::CommPosition3d::setZ, obj, std::placeholders::_1)
			)
		)
	);
	return ret;
} // end SelfDescription
} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
