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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMBASICOBJECTS_COMMFILEREADANSWER_H_
#define COMMBASICOBJECTS_COMMFILEREADANSWER_H_

#include "CommBasicObjects/CommFileReadAnswerCore.hh"

namespace CommBasicObjects {
		
class CommFileReadAnswer : public CommFileReadAnswerCore {
	public:
		// default constructors
		CommFileReadAnswer();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommFileReadAnswer(const bool &success, const CommBasicObjects::CommDataFile &file);
		
		CommFileReadAnswer(const CommFileReadAnswerCore &commFileReadAnswer);
		CommFileReadAnswer(const DATATYPE &commFileReadAnswer);
		virtual ~CommFileReadAnswer();
		
		// use framework specific getter and setter methods from core (base) class
		using CommFileReadAnswerCore::get;
		using CommFileReadAnswerCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommFileReadAnswer &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMFILEREADANSWER_H_ */
