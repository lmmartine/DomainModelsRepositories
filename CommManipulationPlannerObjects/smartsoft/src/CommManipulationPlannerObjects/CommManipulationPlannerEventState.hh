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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMMANIPULATIONPLANNEROBJECTS_COMMMANIPULATIONPLANNEREVENTSTATE_H_
#define COMMMANIPULATIONPLANNEROBJECTS_COMMMANIPULATIONPLANNEREVENTSTATE_H_

#include "CommManipulationPlannerObjects/CommManipulationPlannerEventStateCore.hh"

namespace CommManipulationPlannerObjects {
		
class CommManipulationPlannerEventState : public CommManipulationPlannerEventStateCore {
	public:
		// default constructors
		CommManipulationPlannerEventState();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommManipulationPlannerEventState(const CommManipulationPlannerObjects::ManipulationPlannerEvent &event, const CommBasicObjects::CommPose3d &pose);
		
		CommManipulationPlannerEventState(const CommManipulationPlannerEventStateCore &commManipulationPlannerEventState);
		CommManipulationPlannerEventState(const DATATYPE &commManipulationPlannerEventState);
		virtual ~CommManipulationPlannerEventState();
		
		// use framework specific getter and setter methods from core (base) class
		using CommManipulationPlannerEventStateCore::get;
		using CommManipulationPlannerEventStateCore::set;
		
		//
		// feel free to add customized methods here
		//

		inline void set_event(ManipulationPlannerEvent event) {
			this->idl_CommManipulationPlannerEventState.event = event;
		}

		inline ManipulationPlannerEvent get_event() const {
			return this->idl_CommManipulationPlannerEventState.event;
		}

		inline void set_pose(CommBasicObjects::CommPose3d pose) {
			this->idl_CommManipulationPlannerEventState.pose = pose;
		}

		inline CommBasicObjects::CommPose3d get_pose() const {
			return this->idl_CommManipulationPlannerEventState.pose;
		}
};

inline std::ostream &operator<<(std::ostream &os, const CommManipulationPlannerEventState &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommManipulationPlannerObjects */
#endif /* COMMMANIPULATIONPLANNEROBJECTS_COMMMANIPULATIONPLANNEREVENTSTATE_H_ */