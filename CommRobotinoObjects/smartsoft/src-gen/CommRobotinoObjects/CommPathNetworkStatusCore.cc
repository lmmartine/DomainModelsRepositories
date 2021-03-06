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
#include "CommRobotinoObjects/CommPathNetworkStatusCore.hh"

// serialization/deserialization operators
//#include "CommRobotinoObjects/CommPathNetworkStatusACE.hh"

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
	const char* CommPathNetworkStatusCore::getCompiledHash()
	{
		return CommRobotinoObjectsIDL::REPO_HASH;
	}
	
	void CommPathNetworkStatusCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommRobotinoObjects::CommPathNode(idl_CommPathNetworkStatus.nodes)
		CommRobotinoObjects::CommPathNode::getAllHashValues(hashes);
	}
	
	void CommPathNetworkStatusCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommPathNetworkStatusCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommRobotinoObjects::CommPathNode(idl_CommPathNetworkStatus.nodes)
		CommRobotinoObjects::CommPathNode::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommPathNetworkStatusCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		std::vector<CommRobotinoObjectsIDL::CommPathNode>::const_iterator data_nodesIt;
		for(data_nodesIt=data.nodes.begin(); data_nodesIt!=data.nodes.end(); data_nodesIt++) {
			seed += CommRobotinoObjects::CommPathNode::generateDataHash(*data_nodesIt);
		}
		
		return seed;
	}
	#endif
	
	// default constructor
	CommPathNetworkStatusCore::CommPathNetworkStatusCore()
	:	idl_CommPathNetworkStatus()
	{  
		setNodes(std::vector<CommRobotinoObjects::CommPathNode>());
	}
	
	CommPathNetworkStatusCore::CommPathNetworkStatusCore(const DATATYPE &data)
	:	idl_CommPathNetworkStatus(data)
	{  }

	CommPathNetworkStatusCore::~CommPathNetworkStatusCore()
	{  }
	
	void CommPathNetworkStatusCore::to_ostream(std::ostream &os) const
	{
	  os << "CommPathNetworkStatus(";
	  std::vector<CommRobotinoObjects::CommPathNode>::const_iterator nodesIt;
	  std::vector<CommRobotinoObjects::CommPathNode> nodesList = getNodesCopy();
	  for(nodesIt=nodesList.begin(); nodesIt!=nodesList.end(); nodesIt++) {
	  	nodesIt->to_ostream(os);
	  }
	  os << ") ";
	}
	
	// convert to xml stream
	void CommPathNetworkStatusCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		std::vector<CommRobotinoObjects::CommPathNode>::const_iterator nodesIt;
		std::vector<CommRobotinoObjects::CommPathNode> nodesList = getNodesCopy();
		counter = 0;
		os << indent << "<nodesList n=\"" << nodesList.size() << "\">";
		for(nodesIt=nodesList.begin(); nodesIt!=nodesList.end(); nodesIt++) {
			os << indent << "<nodes i=\"" << counter++ << "\">";
			nodesIt->to_xml(os, indent);
			os << indent << "</nodes>";
		}
		os << indent << "</nodesList>";
	}
	
	// restore from xml stream
	void CommPathNetworkStatusCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_nodesList("<nodesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_nodes("\">");
		
		if(kmp_nodesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			CommRobotinoObjects::CommPathNode nodesItem;
			std::vector<CommRobotinoObjects::CommPathNode> nodesList;
			kmp_nodes.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_nodes.search(is)) {
					nodesItem.from_xml(is);
					nodesList.push_back(nodesItem);
				}
			}
			setNodes(nodesList);
		}
	}
	
	/*
	void CommPathNetworkStatusCore::get(ACE_Message_Block *&msg) const
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
		// (see CommPathNetworkStatusACE.hh)
		cdr << idl_CommPathNetworkStatus;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommPathNetworkStatus);
		cdr << data_hash;
		// std::cout << "CommPathNetworkStatusCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommPathNetworkStatusCore::set(const ACE_Message_Block *msg)
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
		// (see CommPathNetworkStatusACE.hh)
		cdr >> idl_CommPathNetworkStatus;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommPathNetworkStatus);
		assert(data_hash == own_hash);
		// std::cout << "CommPathNetworkStatusCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommRobotinoObjects */
