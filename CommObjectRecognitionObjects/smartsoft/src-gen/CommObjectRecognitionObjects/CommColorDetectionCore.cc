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
#include "CommObjectRecognitionObjects/CommColorDetectionCore.hh"

// serialization/deserialization operators
//#include "CommObjectRecognitionObjects/CommColorDetectionACE.hh"

// include the hash.idl containing the hash constant
#include "hash.hh"
#include <assert.h>
#include <cstring>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

#ifdef ENABLE_HASH
	#include <boost/functional/hash.hpp>
#endif

namespace CommObjectRecognitionObjects 
{
	const char* CommColorDetectionCore::getCompiledHash()
	{
		return CommObjectRecognitionObjectsIDL::REPO_HASH;
	}
	
	void CommColorDetectionCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommObjectRecognitionObjects::Color(idl_CommColorDetection.color)
		CommObjectRecognitionObjects::Color::getAllHashValues(hashes);
		// get hash value(s) for CommObjectRecognitionObjects::ROI(idl_CommColorDetection.roi)
		CommObjectRecognitionObjects::ROI::getAllHashValues(hashes);
	}
	
	void CommColorDetectionCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommColorDetectionCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommObjectRecognitionObjects::Color(idl_CommColorDetection.color)
		CommObjectRecognitionObjects::Color::checkAllHashValues(hashes);
		// check hash value(s) for CommObjectRecognitionObjects::ROI(idl_CommColorDetection.roi)
		CommObjectRecognitionObjects::ROI::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommColorDetectionCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += CommObjectRecognitionObjects::Color::generateDataHash(data.color);
		seed += CommObjectRecognitionObjects::ROI::generateDataHash(data.roi);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommColorDetectionCore::CommColorDetectionCore()
	:	idl_CommColorDetection()
	{  
		setColor(CommObjectRecognitionObjects::Color());
		setRoi(CommObjectRecognitionObjects::ROI());
	}
	
	CommColorDetectionCore::CommColorDetectionCore(const DATATYPE &data)
	:	idl_CommColorDetection(data)
	{  }

	CommColorDetectionCore::~CommColorDetectionCore()
	{  }
	
	void CommColorDetectionCore::to_ostream(std::ostream &os) const
	{
	  os << "CommColorDetection(";
	  getColor().to_ostream(os);
	  getRoi().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void CommColorDetectionCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<color>";
		getColor().to_xml(os, indent);
		os << indent << "</color>";
		os << indent << "<roi>";
		getRoi().to_xml(os, indent);
		os << indent << "</roi>";
	}
	
	// restore from xml stream
	void CommColorDetectionCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_color("<color>");
		static const Smart::KnuthMorrisPratt kmp_roi("<roi>");
		
		if(kmp_color.search(is)) {
			CommObjectRecognitionObjects::Color colorItem;
			colorItem.from_xml(is);
			setColor(colorItem);
		}
		if(kmp_roi.search(is)) {
			CommObjectRecognitionObjects::ROI roiItem;
			roiItem.from_xml(is);
			setRoi(roiItem);
		}
	}
	
	/*
	void CommColorDetectionCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommObjectRecognitionObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommObjectRecognitionObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommColorDetectionACE.hh)
		cdr << idl_CommColorDetection;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommColorDetection);
		cdr << data_hash;
		// std::cout << "CommColorDetectionCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommColorDetectionCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommObjectRecognitionObjectsIDL::HashList hashes;
		ACE_CDR::Long hashes_size;
		cdr >> hashes_size;
		for(int i=0; i<hashes_size; ++i) 
		{
			ACE_CString hash;
			cdr >> hash;
			hashes.push_back(hash.c_str());
		}
		checkAllHashValues(hashes);
		
		// Here the actual de-serialization takes place using the InputCDR serialization operator>>
		// (see CommColorDetectionACE.hh)
		cdr >> idl_CommColorDetection;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommColorDetection);
		assert(data_hash == own_hash);
		// std::cout << "CommColorDetectionCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommObjectRecognitionObjects */
