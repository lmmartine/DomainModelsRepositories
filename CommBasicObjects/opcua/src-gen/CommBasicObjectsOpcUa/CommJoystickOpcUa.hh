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

#include "CommBasicObjects/CommJoystick.hh"
#include <SeRoNet/CommunicationObjects/Description/SelfDescription.hpp>
#include <SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#pragma once


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
// serialization for CommJoystick
template <>
ComplexType::shp_t SelfDescription(CommBasicObjects::CommJoystick *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	/// \todo check for ComplexObjects
	// add xpos
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementInt16(
				"xpos",
				std::bind(&CommBasicObjects::CommJoystick::getXpos, obj),
				std::bind(&CommBasicObjects::CommJoystick::setXpos, obj, std::placeholders::_1)
			)
		)
	);
	// add ypos
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementInt16(
				"ypos",
				std::bind(&CommBasicObjects::CommJoystick::getYpos, obj),
				std::bind(&CommBasicObjects::CommJoystick::setYpos, obj, std::placeholders::_1)
			)
		)
	);
	// add x2pos
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementInt16(
				"x2pos",
				std::bind(&CommBasicObjects::CommJoystick::getX2pos, obj),
				std::bind(&CommBasicObjects::CommJoystick::setX2pos, obj, std::placeholders::_1)
			)
		)
	);
	// add y2pos
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementInt16(
				"y2pos",
				std::bind(&CommBasicObjects::CommJoystick::getY2pos, obj),
				std::bind(&CommBasicObjects::CommJoystick::setY2pos, obj, std::placeholders::_1)
			)
		)
	);
	// add buttons
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementUInt16(
				"buttons",
				std::bind(&CommBasicObjects::CommJoystick::getButtons, obj),
				std::bind(&CommBasicObjects::CommJoystick::setButtons, obj, std::placeholders::_1)
			)
		)
	);
	return ret;
} // end SelfDescription
} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
