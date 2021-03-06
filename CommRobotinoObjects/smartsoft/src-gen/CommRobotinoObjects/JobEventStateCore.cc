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
#include "CommRobotinoObjects/JobEventStateCore.hh"

// serialization/deserialization operators
//#include "CommRobotinoObjects/JobEventStateACE.hh"

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

namespace CommRobotinoObjects 
{
	const char* JobEventStateCore::getCompiledHash()
	{
		return CommRobotinoObjectsIDL::REPO_HASH;
	}
	
	void JobEventStateCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommBasicObjects::CommTCLMessage(idl_JobEventState.job)
		CommBasicObjects::CommTCLMessage::getAllHashValues(hashes);
	}
	
	void JobEventStateCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "JobEventStateCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommBasicObjects::CommTCLMessage(idl_JobEventState.job)
		CommBasicObjects::CommTCLMessage::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t JobEventStateCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, std::string(data.robotTarget.c_str()));
		seed += CommBasicObjects::CommTCLMessage::generateDataHash(data.job);
		
		return seed;
	}
	#endif
	
	// default constructor
	JobEventStateCore::JobEventStateCore()
	:	idl_JobEventState()
	{  
		setRobotTarget("");
		setJob(CommBasicObjects::CommTCLMessage());
	}
	
	JobEventStateCore::JobEventStateCore(const DATATYPE &data)
	:	idl_JobEventState(data)
	{  }

	JobEventStateCore::~JobEventStateCore()
	{  }
	
	void JobEventStateCore::to_ostream(std::ostream &os) const
	{
	  os << "JobEventState(";
	  os << getRobotTarget() << " ";
	  getJob().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void JobEventStateCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<robotTarget>" << getRobotTarget() << "</robotTarget>";
		os << indent << "<job>";
		getJob().to_xml(os, indent);
		os << indent << "</job>";
	}
	
	// restore from xml stream
	void JobEventStateCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_robotTarget("<robotTarget>");
		static const Smart::KnuthMorrisPratt kmp_job("<job>");
		
		if(kmp_robotTarget.search(is)) {
			std::string robotTargetItem;
			is >> robotTargetItem;
			setRobotTarget(robotTargetItem);
		}
		if(kmp_job.search(is)) {
			CommBasicObjects::CommTCLMessage jobItem;
			jobItem.from_xml(is);
			setJob(jobItem);
		}
	}
	
	/*
	void JobEventStateCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommRobotinoObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommRobotinoObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see JobEventStateACE.hh)
		cdr << idl_JobEventState;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_JobEventState);
		cdr << data_hash;
		// std::cout << "JobEventStateCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void JobEventStateCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommRobotinoObjectsIDL::HashList hashes;
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
		// (see JobEventStateACE.hh)
		cdr >> idl_JobEventState;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_JobEventState);
		assert(data_hash == own_hash);
		// std::cout << "JobEventStateCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommRobotinoObjects */
