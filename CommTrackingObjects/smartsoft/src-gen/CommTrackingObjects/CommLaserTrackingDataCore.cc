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
#include "CommTrackingObjects/CommLaserTrackingDataCore.hh"

// serialization/deserialization operators
//#include "CommTrackingObjects/CommLaserTrackingDataACE.hh"

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

namespace CommTrackingObjects 
{
	const char* CommLaserTrackingDataCore::getCompiledHash()
	{
		return CommTrackingObjectsIDL::REPO_HASH;
	}
	
	void CommLaserTrackingDataCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommBasicObjects::CommMobileLaserScan(idl_CommLaserTrackingData.scan)
		CommBasicObjects::CommMobileLaserScan::getAllHashValues(hashes);
		// get hash value(s) for CommTrackingObjects::CommLaserTrackedObject(idl_CommLaserTrackingData.objects)
		CommTrackingObjects::CommLaserTrackedObject::getAllHashValues(hashes);
	}
	
	void CommLaserTrackingDataCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommLaserTrackingDataCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommBasicObjects::CommMobileLaserScan(idl_CommLaserTrackingData.scan)
		CommBasicObjects::CommMobileLaserScan::checkAllHashValues(hashes);
		// check hash value(s) for CommTrackingObjects::CommLaserTrackedObject(idl_CommLaserTrackingData.objects)
		CommTrackingObjects::CommLaserTrackedObject::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommLaserTrackingDataCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += CommBasicObjects::CommMobileLaserScan::generateDataHash(data.scan);
		std::vector<CommTrackingObjectsIDL::CommLaserTrackedObject>::const_iterator data_objectsIt;
		for(data_objectsIt=data.objects.begin(); data_objectsIt!=data.objects.end(); data_objectsIt++) {
			seed += CommTrackingObjects::CommLaserTrackedObject::generateDataHash(*data_objectsIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	CommLaserTrackingDataCore::CommLaserTrackingDataCore()
	:	idl_CommLaserTrackingData()
	{  
		setScan(CommBasicObjects::CommMobileLaserScan());
		setObjects(std::vector<CommTrackingObjects::CommLaserTrackedObject>());
	}
	
	CommLaserTrackingDataCore::CommLaserTrackingDataCore(const DATATYPE &data)
	:	idl_CommLaserTrackingData(data)
	{  }

	CommLaserTrackingDataCore::~CommLaserTrackingDataCore()
	{  }
	
	void CommLaserTrackingDataCore::to_ostream(std::ostream &os) const
	{
	  os << "CommLaserTrackingData(";
	  getScan().to_ostream(os);
	  std::vector<CommTrackingObjects::CommLaserTrackedObject>::const_iterator objectsIt;
	  std::vector<CommTrackingObjects::CommLaserTrackedObject> objectsList = getObjectsCopy();
	  for(objectsIt=objectsList.begin(); objectsIt!=objectsList.end(); objectsIt++) {
	  	objectsIt->to_ostream(os);
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void CommLaserTrackingDataCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		os << indent << "<scan>";
		getScan().to_xml(os, indent);
		os << indent << "</scan>";
		std::vector<CommTrackingObjects::CommLaserTrackedObject>::const_iterator objectsIt;
		std::vector<CommTrackingObjects::CommLaserTrackedObject> objectsList = getObjectsCopy();
		counter = 0;
		os << indent << "<objectsList n=\"" << objectsList.size() << "\">";
		for(objectsIt=objectsList.begin(); objectsIt!=objectsList.end(); objectsIt++) {
			os << indent << "<objects i=\"" << counter++ << "\">";
			objectsIt->to_xml(os, indent);
			os << indent << "</objects>";
		}
		os << indent << "</objectsList>";
	}
	
	// restore from xml stream
	void CommLaserTrackingDataCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_scan("<scan>");
		static const Smart::KnuthMorrisPratt kmp_objectsList("<objectsList n=\"");
		static const Smart::KnuthMorrisPratt kmp_objects("\">");
		
		if(kmp_scan.search(is)) {
			CommBasicObjects::CommMobileLaserScan scanItem;
			scanItem.from_xml(is);
			setScan(scanItem);
		}
		if(kmp_objectsList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			CommTrackingObjects::CommLaserTrackedObject objectsItem;
			std::vector<CommTrackingObjects::CommLaserTrackedObject> objectsList;
			kmp_objects.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_objects.search(is)) {
					objectsItem.from_xml(is);
					objectsList.push_back(objectsItem);
				}
			}
			setObjects(objectsList);
		}
	}
	
	/*
	void CommLaserTrackingDataCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommTrackingObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommTrackingObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommLaserTrackingDataACE.hh)
		cdr << idl_CommLaserTrackingData;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommLaserTrackingData);
		cdr << data_hash;
		// std::cout << "CommLaserTrackingDataCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommLaserTrackingDataCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommTrackingObjectsIDL::HashList hashes;
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
		// (see CommLaserTrackingDataACE.hh)
		cdr >> idl_CommLaserTrackingData;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommLaserTrackingData);
		assert(data_hash == own_hash);
		// std::cout << "CommLaserTrackingDataCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommTrackingObjects */
