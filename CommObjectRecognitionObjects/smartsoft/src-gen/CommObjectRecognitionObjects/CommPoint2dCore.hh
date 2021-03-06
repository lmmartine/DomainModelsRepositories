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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_COMMPOINT2D_CORE_H_
#define COMMOBJECTRECOGNITIONOBJECTS_COMMPOINT2D_CORE_H_

#include "CommObjectRecognitionObjects/CommPoint2dData.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommObjectRecognitionObjects {
	
class CommPoint2dCore {
protected:
	// data structure
	CommObjectRecognitionObjectsIDL::CommPoint2d idl_CommPoint2d;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommObjectRecognitionObjectsIDL::CommPoint2d DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommPoint2dCore();
	CommPoint2dCore(const DATATYPE &data);
	// default destructor
	virtual ~CommPoint2dCore();
	
	const DATATYPE& get() const { return idl_CommPoint2d; }
	operator const DATATYPE&() const { return idl_CommPoint2d; }
	DATATYPE& set() { return idl_CommPoint2d; }

	static inline std::string identifier(void) { return "CommObjectRecognitionObjects::CommPoint2d"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element X
	inline double getX() const { return idl_CommPoint2d.x; }
	inline CommPoint2dCore& setX(const double &x) { idl_CommPoint2d.x = x; return *this; }
	
	// getter and setter for element Y
	inline double getY() const { return idl_CommPoint2d.y; }
	inline CommPoint2dCore& setY(const double &y) { idl_CommPoint2d.y = y; return *this; }
};

} /* namespace CommObjectRecognitionObjects */
#endif /* COMMOBJECTRECOGNITIONOBJECTS_COMMPOINT2D_CORE_H_ */
