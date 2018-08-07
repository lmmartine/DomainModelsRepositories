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

#include "CommLocalizationObjects/CMatrixDouble22.hh"
#include <SeRoNet/CommunicationObjects/Description/SelfDescription.hpp>
#include <SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#pragma once


namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
// serialization for CMatrixDouble22
template <>
ComplexType::shp_t SelfDescription(CommLocalizationObjects::CMatrixDouble22 *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	/// \todo check for ComplexObjects
	// add m_00
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"m_00",
				std::bind(&CommLocalizationObjects::CMatrixDouble22::getM_00, obj),
				std::bind(&CommLocalizationObjects::CMatrixDouble22::setM_00, obj, std::placeholders::_1)
			)
		)
	);
	// add m_01
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"m_01",
				std::bind(&CommLocalizationObjects::CMatrixDouble22::getM_01, obj),
				std::bind(&CommLocalizationObjects::CMatrixDouble22::setM_01, obj, std::placeholders::_1)
			)
		)
	);
	// add m_10
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"m_10",
				std::bind(&CommLocalizationObjects::CMatrixDouble22::getM_10, obj),
				std::bind(&CommLocalizationObjects::CMatrixDouble22::setM_10, obj, std::placeholders::_1)
			)
		)
	);
	// add m_11
	ret->add(
		SeRoNet::CommunicationObjects::Description::IDescription::shp_t(
			new SeRoNet::CommunicationObjects::Description::ElementDouble(
				"m_11",
				std::bind(&CommLocalizationObjects::CMatrixDouble22::getM_11, obj),
				std::bind(&CommLocalizationObjects::CMatrixDouble22::setM_11, obj, std::placeholders::_1)
			)
		)
	);
	return ret;
} // end SelfDescription
} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
