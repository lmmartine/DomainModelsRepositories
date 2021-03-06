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
#ifndef COMMMANIPULATOROBJECTS_COMMGRIPPERSTATE_DATA_H_
#define COMMMANIPULATOROBJECTS_COMMGRIPPERSTATE_DATA_H_

#include "CommManipulatorObjects/enumGripperGraspStateData.hh"

#include <vector>

namespace CommManipulatorObjectsIDL 
{
	typedef std::vector<float> CommGripperState_pos_type;
	struct CommGripperState
	{
		CommGripperState_pos_type pos;
		bool is_valid;
		CommManipulatorObjectsIDL::GripperGraspState graspState;
		bool graspState_valid;
  	};
};

#endif /* COMMMANIPULATOROBJECTS_COMMGRIPPERSTATE_DATA_H_ */
