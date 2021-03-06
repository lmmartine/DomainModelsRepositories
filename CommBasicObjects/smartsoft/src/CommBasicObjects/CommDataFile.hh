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
#ifndef COMMBASICOBJECTS_COMMDATAFILE_H_
#define COMMBASICOBJECTS_COMMDATAFILE_H_

#include "CommBasicObjects/CommDataFileCore.hh"

namespace CommBasicObjects {
		
class CommDataFile : public CommDataFileCore {
	public:
		// default constructors
		CommDataFile();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommDataFile(const std::string &filename, const unsigned int &filesize, const CommBasicObjects::CommTimeStamp &timestamp, const std::vector<char> &data, const bool &valid);
		
		CommDataFile(const CommDataFileCore &commDataFile);
		CommDataFile(const DATATYPE &commDataFile);
		virtual ~CommDataFile();
		
		// use framework specific getter and setter methods from core (base) class
		using CommDataFileCore::get;
		using CommDataFileCore::set;
		
		//
		// feel free to add customized methods here
		//
		void set_data_as_copy(const char* data, unsigned int size);

		bool readFromFile(std::string filename);
		bool writeToFile(std::string filename);
		bool readFromFile(std::ifstream& file);
		bool writeToFile(std::ofstream& file);
};

inline std::ostream &operator<<(std::ostream &os, const CommDataFile &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMDATAFILE_H_ */
