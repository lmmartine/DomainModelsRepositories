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
#include "CommTrackingObjects/LeaderEventStateCore.hh"

// serialization/deserialization operators
//#include "CommTrackingObjects/LeaderEventStateACE.hh"

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
	const char* LeaderEventStateCore::getCompiledHash()
	{
		return CommTrackingObjectsIDL::REPO_HASH;
	}
	
	void LeaderEventStateCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void LeaderEventStateCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "LeaderEventStateCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t LeaderEventStateCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.type);
		boost::hash_combine(seed, data.goal_x);
		boost::hash_combine(seed, data.goal_y);
		
		return seed;
	}
	#endif
	
	// default constructor
	LeaderEventStateCore::LeaderEventStateCore()
	:	idl_LeaderEventState()
	{  
		setType(CommTrackingObjects::LeaderEventType());
		setGoal_x(0);
		setGoal_y(0);
	}
	
	LeaderEventStateCore::LeaderEventStateCore(const DATATYPE &data)
	:	idl_LeaderEventState(data)
	{  }

	LeaderEventStateCore::~LeaderEventStateCore()
	{  }
	
	void LeaderEventStateCore::to_ostream(std::ostream &os) const
	{
	  os << "LeaderEventState(";
	  getType().to_ostream(os);
	  os << getGoal_x() << " ";
	  os << getGoal_y() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void LeaderEventStateCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<type>";
		getType().to_xml(os, indent);
		os << indent << "</type>";
		os << indent << "<goal_x>" << getGoal_x() << "</goal_x>";
		os << indent << "<goal_y>" << getGoal_y() << "</goal_y>";
	}
	
	// restore from xml stream
	void LeaderEventStateCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_type("<type>");
		static const Smart::KnuthMorrisPratt kmp_goal_x("<goal_x>");
		static const Smart::KnuthMorrisPratt kmp_goal_y("<goal_y>");
		
		if(kmp_type.search(is)) {
			CommTrackingObjects::LeaderEventType typeItem;
			typeItem.from_xml(is);
			setType(typeItem);
		}
		if(kmp_goal_x.search(is)) {
			int goal_xItem;
			is >> goal_xItem;
			setGoal_x(goal_xItem);
		}
		if(kmp_goal_y.search(is)) {
			int goal_yItem;
			is >> goal_yItem;
			setGoal_y(goal_yItem);
		}
	}
	
	/*
	void LeaderEventStateCore::get(ACE_Message_Block *&msg) const
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
		// (see LeaderEventStateACE.hh)
		cdr << idl_LeaderEventState;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_LeaderEventState);
		cdr << data_hash;
		// std::cout << "LeaderEventStateCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void LeaderEventStateCore::set(const ACE_Message_Block *msg)
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
		// (see LeaderEventStateACE.hh)
		cdr >> idl_LeaderEventState;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_LeaderEventState);
		assert(data_hash == own_hash);
		// std::cout << "LeaderEventStateCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommTrackingObjects */
