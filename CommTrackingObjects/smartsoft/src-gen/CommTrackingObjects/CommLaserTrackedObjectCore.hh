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
#ifndef COMMTRACKINGOBJECTS_COMMLASERTRACKEDOBJECT_CORE_H_
#define COMMTRACKINGOBJECTS_COMMLASERTRACKEDOBJECT_CORE_H_

#include "CommTrackingObjects/CommLaserTrackedObjectData.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommTrackingObjects {
	
class CommLaserTrackedObjectCore {
protected:
	// data structure
	CommTrackingObjectsIDL::CommLaserTrackedObject idl_CommLaserTrackedObject;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommTrackingObjectsIDL::CommLaserTrackedObject DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommLaserTrackedObjectCore();
	CommLaserTrackedObjectCore(const DATATYPE &data);
	// default destructor
	virtual ~CommLaserTrackedObjectCore();
	
	const DATATYPE& get() const { return idl_CommLaserTrackedObject; }
	operator const DATATYPE&() const { return idl_CommLaserTrackedObject; }
	DATATYPE& set() { return idl_CommLaserTrackedObject; }

	static inline std::string identifier(void) { return "CommTrackingObjects::CommLaserTrackedObject"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Id
	inline unsigned int getId() const { return idl_CommLaserTrackedObject.id; }
	inline CommLaserTrackedObjectCore& setId(const unsigned int &id) { idl_CommLaserTrackedObject.id = id; return *this; }
	
	// getter and setter for element First_point
	inline unsigned short getFirst_point() const { return idl_CommLaserTrackedObject.first_point; }
	inline CommLaserTrackedObjectCore& setFirst_point(const unsigned short &first_point) { idl_CommLaserTrackedObject.first_point = first_point; return *this; }
	
	// getter and setter for element Last_point
	inline unsigned short getLast_point() const { return idl_CommLaserTrackedObject.last_point; }
	inline CommLaserTrackedObjectCore& setLast_point(const unsigned short &last_point) { idl_CommLaserTrackedObject.last_point = last_point; return *this; }
};

} /* namespace CommTrackingObjects */
#endif /* COMMTRACKINGOBJECTS_COMMLASERTRACKEDOBJECT_CORE_H_ */
