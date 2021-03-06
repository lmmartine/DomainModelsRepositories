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
#ifndef DOMAINSPEECH_COMMSPEECHINPUTEVENTRESULT_CORE_H_
#define DOMAINSPEECH_COMMSPEECHINPUTEVENTRESULT_CORE_H_

#include "DomainSpeech/CommSpeechInputEventResultData.hh"

#include <iostream>
#include <string>
#include <list>

namespace DomainSpeech {
	
class CommSpeechInputEventResultCore {
protected:
	// data structure
	DomainSpeechIDL::CommSpeechInputEventResult idl_CommSpeechInputEventResult;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef DomainSpeechIDL::CommSpeechInputEventResult DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommSpeechInputEventResultCore();
	CommSpeechInputEventResultCore(const DATATYPE &data);
	// default destructor
	virtual ~CommSpeechInputEventResultCore();
	
	const DATATYPE& get() const { return idl_CommSpeechInputEventResult; }
	operator const DATATYPE&() const { return idl_CommSpeechInputEventResult; }
	DATATYPE& set() { return idl_CommSpeechInputEventResult; }

	static inline std::string identifier(void) { return "DomainSpeech::CommSpeechInputEventResult"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Text
	inline std::string getText() const { return idl_CommSpeechInputEventResult.text; }
	inline CommSpeechInputEventResultCore& setText(const std::string &text) { idl_CommSpeechInputEventResult.text = text; return *this; }
	
	// getter and setter for element Confidence
	inline double getConfidence() const { return idl_CommSpeechInputEventResult.confidence; }
	inline CommSpeechInputEventResultCore& setConfidence(const double &confidence) { idl_CommSpeechInputEventResult.confidence = confidence; return *this; }
	
	// getter and setter for element Semantic
	inline std::string getSemantic() const { return idl_CommSpeechInputEventResult.semantic; }
	inline CommSpeechInputEventResultCore& setSemantic(const std::string &semantic) { idl_CommSpeechInputEventResult.semantic = semantic; return *this; }
};

} /* namespace DomainSpeech */
#endif /* DOMAINSPEECH_COMMSPEECHINPUTEVENTRESULT_CORE_H_ */
