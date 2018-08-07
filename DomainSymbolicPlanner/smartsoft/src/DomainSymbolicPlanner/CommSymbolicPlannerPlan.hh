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
// --------------------------------------------------------------------------
//
//  Copyright (C) 2010/2011 Andreas Steck
//
//        schlegel@hs-ulm.de
//        steck@hs-ulm.de
//
//        ZAFH Servicerobotik Ulm
//        University of Applied Sciences
//        Prittwitzstr. 10
//        D-89075 Ulm
//        Germany
//
//  This file is part of the "SmartSoft Communication Classes".
//  It provides basic standardized data types for communication between
//  different components in the mobile robotics context. These classes
//  are designed to be used in conjunction with the SmartSoft Communication
//  Library.
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
// --------------------------------------------------------------------------
#ifndef DOMAINSYMBOLICPLANNER_COMMSYMBOLICPLANNERPLAN_H_
#define DOMAINSYMBOLICPLANNER_COMMSYMBOLICPLANNERPLAN_H_

#include "DomainSymbolicPlanner/CommSymbolicPlannerPlanCore.hh"

namespace DomainSymbolicPlanner {
		
class CommSymbolicPlannerPlan : public CommSymbolicPlannerPlanCore {
	public:
		// default constructors
		CommSymbolicPlannerPlan();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommSymbolicPlannerPlan(const std::string &plan);
		
		CommSymbolicPlannerPlan(const CommSymbolicPlannerPlanCore &commSymbolicPlannerPlan);
		CommSymbolicPlannerPlan(const DATATYPE &commSymbolicPlannerPlan);
		virtual ~CommSymbolicPlannerPlan();
		
		// use framework specific getter and setter methods from core (base) class
		using CommSymbolicPlannerPlanCore::get;
		using CommSymbolicPlannerPlanCore::set;
		

		//
		// feel free to add customized methods here
		//

		inline std::string getPlan() const
		{
			return idl_CommSymbolicPlannerPlan.plan.c_str();
		}
		inline void setPlan(const std::string &plan)
		{
			idl_CommSymbolicPlannerPlan.plan = plan.c_str();
		}

		//
		// add your customized interface here
		//
		int set_plan(std::string name);
		//

		int get_plan(std::string &name) const;
		//

		//WARNING: This methods are not sufficiently tested yet!
		std::string getPlanStatus();

		unsigned int getNumberOfOperations();

		unsigned int getPlanCosts();

		std::list< std::string > getPlanSteps();
		//WARNING: This methods are not sufficiently tested yet!

		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommSymbolicPlannerPlan &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace DomainSymbolicPlanner */
#endif /* DOMAINSYMBOLICPLANNER_COMMSYMBOLICPLANNERPLAN_H_ */