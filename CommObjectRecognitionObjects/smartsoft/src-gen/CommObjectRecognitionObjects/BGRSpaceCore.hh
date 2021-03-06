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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_BGRSPACE_CORE_H_
#define COMMOBJECTRECOGNITIONOBJECTS_BGRSPACE_CORE_H_

#include "CommObjectRecognitionObjects/BGRSpaceData.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommObjectRecognitionObjects {
	
class BGRSpaceCore {
protected:
	// data structure
	CommObjectRecognitionObjectsIDL::BGRSpace idl_BGRSpace;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommObjectRecognitionObjectsIDL::BGRSpace DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	BGRSpaceCore();
	BGRSpaceCore(const DATATYPE &data);
	// default destructor
	virtual ~BGRSpaceCore();
	
	const DATATYPE& get() const { return idl_BGRSpace; }
	operator const DATATYPE&() const { return idl_BGRSpace; }
	DATATYPE& set() { return idl_BGRSpace; }

	static inline std::string identifier(void) { return "CommObjectRecognitionObjects::BGRSpace"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element B
	inline double getB() const { return idl_BGRSpace.b; }
	inline BGRSpaceCore& setB(const double &b) { idl_BGRSpace.b = b; return *this; }
	
	// getter and setter for element G
	inline double getG() const { return idl_BGRSpace.g; }
	inline BGRSpaceCore& setG(const double &g) { idl_BGRSpace.g = g; return *this; }
	
	// getter and setter for element R
	inline double getR() const { return idl_BGRSpace.r; }
	inline BGRSpaceCore& setR(const double &r) { idl_BGRSpace.r = r; return *this; }
};

} /* namespace CommObjectRecognitionObjects */
#endif /* COMMOBJECTRECOGNITIONOBJECTS_BGRSPACE_CORE_H_ */
