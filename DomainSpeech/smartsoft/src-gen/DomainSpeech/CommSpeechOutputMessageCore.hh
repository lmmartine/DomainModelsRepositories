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
#ifndef DOMAINSPEECH_COMMSPEECHOUTPUTMESSAGE_CORE_H_
#define DOMAINSPEECH_COMMSPEECHOUTPUTMESSAGE_CORE_H_

#include "DomainSpeech/CommSpeechOutputMessageData.hh"
#include "CommBasicObjects/CommTimeStamp.hh"

#include <iostream>
#include <string>
#include <list>

namespace DomainSpeech {
	
class CommSpeechOutputMessageCore {
protected:
	// data structure
	DomainSpeechIDL::CommSpeechOutputMessage idl_CommSpeechOutputMessage;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef DomainSpeechIDL::CommSpeechOutputMessage DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommSpeechOutputMessageCore();
	CommSpeechOutputMessageCore(const DATATYPE &data);
	// default destructor
	virtual ~CommSpeechOutputMessageCore();
	
	const DATATYPE& get() const { return idl_CommSpeechOutputMessage; }
	operator const DATATYPE&() const { return idl_CommSpeechOutputMessage; }
	DATATYPE& set() { return idl_CommSpeechOutputMessage; }

	static inline std::string identifier(void) { return "DomainSpeech::CommSpeechOutputMessage"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Time
	inline CommBasicObjects::CommTimeStamp getTime() const { return CommBasicObjects::CommTimeStamp(idl_CommSpeechOutputMessage.time); }
	inline CommSpeechOutputMessageCore& setTime(const CommBasicObjects::CommTimeStamp &time) { idl_CommSpeechOutputMessage.time = time; return *this; }
	
	// getter and setter for element Reset
	inline bool getReset() const { return idl_CommSpeechOutputMessage.reset; }
	inline CommSpeechOutputMessageCore& setReset(const bool &reset) { idl_CommSpeechOutputMessage.reset = reset; return *this; }
	
	// getter and setter for element Ttl
	inline float getTtl() const { return idl_CommSpeechOutputMessage.ttl; }
	inline CommSpeechOutputMessageCore& setTtl(const float &ttl) { idl_CommSpeechOutputMessage.ttl = ttl; return *this; }
	
	// getter and setter for element Text
	inline std::string getText() const { return idl_CommSpeechOutputMessage.text; }
	inline CommSpeechOutputMessageCore& setText(const std::string &text) { idl_CommSpeechOutputMessage.text = text; return *this; }
};

} /* namespace DomainSpeech */
#endif /* DOMAINSPEECH_COMMSPEECHOUTPUTMESSAGE_CORE_H_ */
