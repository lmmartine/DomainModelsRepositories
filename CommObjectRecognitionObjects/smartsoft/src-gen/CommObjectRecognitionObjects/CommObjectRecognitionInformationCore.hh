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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONINFORMATION_CORE_H_
#define COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONINFORMATION_CORE_H_

#include "CommObjectRecognitionObjects/CommObjectRecognitionInformationData.hh"
#include "CommObjectRecognitionObjects/ROI.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommObjectRecognitionObjects {
	
class CommObjectRecognitionInformationCore {
protected:
	// data structure
	CommObjectRecognitionObjectsIDL::CommObjectRecognitionInformation idl_CommObjectRecognitionInformation;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommObjectRecognitionObjectsIDL::CommObjectRecognitionInformation DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommObjectRecognitionInformationCore();
	CommObjectRecognitionInformationCore(const DATATYPE &data);
	// default destructor
	virtual ~CommObjectRecognitionInformationCore();
	
	const DATATYPE& get() const { return idl_CommObjectRecognitionInformation; }
	operator const DATATYPE&() const { return idl_CommObjectRecognitionInformation; }
	DATATYPE& set() { return idl_CommObjectRecognitionInformation; }

	static inline std::string identifier(void) { return "CommObjectRecognitionObjects::CommObjectRecognitionInformation"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Id
	inline unsigned int getId() const { return idl_CommObjectRecognitionInformation.id; }
	inline CommObjectRecognitionInformationCore& setId(const unsigned int &id) { idl_CommObjectRecognitionInformation.id = id; return *this; }
	
	// getter and setter for element Roi
	inline CommObjectRecognitionObjects::ROI getRoi() const { return CommObjectRecognitionObjects::ROI(idl_CommObjectRecognitionInformation.roi); }
	inline CommObjectRecognitionInformationCore& setRoi(const CommObjectRecognitionObjects::ROI &roi) { idl_CommObjectRecognitionInformation.roi = roi; return *this; }
};

} /* namespace CommObjectRecognitionObjects */
#endif /* COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONINFORMATION_CORE_H_ */
