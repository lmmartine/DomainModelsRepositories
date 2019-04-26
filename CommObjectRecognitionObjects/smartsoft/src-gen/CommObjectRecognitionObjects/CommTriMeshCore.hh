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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_COMMTRIMESH_CORE_H_
#define COMMOBJECTRECOGNITIONOBJECTS_COMMTRIMESH_CORE_H_

#include "CommObjectRecognitionObjects/CommTriMeshData.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommObjectRecognitionObjects {
	
class CommTriMeshCore {
protected:
	// data structure
	CommObjectRecognitionObjectsIDL::CommTriMesh idl_CommTriMesh;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommObjectRecognitionObjectsIDL::CommTriMesh DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommTriMeshCore();
	CommTriMeshCore(const DATATYPE &data);
	// default destructor
	virtual ~CommTriMeshCore();
	
	const DATATYPE& get() const { return idl_CommTriMesh; }
	operator const DATATYPE&() const { return idl_CommTriMesh; }
	DATATYPE& set() { return idl_CommTriMesh; }

	static inline std::string identifier(void) { return "CommObjectRecognitionObjects::CommTriMesh"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Vertices_p1
	/**
	 * Getter methods for idl_CommTriMesh.vertices_p1 of type vector<unsigned int>
	 */
	inline std::vector<unsigned int>& getVertices_p1Ref() { return idl_CommTriMesh.vertices_p1; }
	inline std::vector<unsigned int> getVertices_p1Copy() const {
		return std::vector<unsigned int>(idl_CommTriMesh.vertices_p1.begin(), idl_CommTriMesh.vertices_p1.end());
	}
	inline unsigned int getVertices_p1ElemAtPos(const size_t &pos) const { return idl_CommTriMesh.vertices_p1[pos]; }
	inline size_t getVertices_p1Size() const { return idl_CommTriMesh.vertices_p1.size(); }
	inline bool isVertices_p1Empty() const { return idl_CommTriMesh.vertices_p1.empty(); }
	/**
	 * Setter methods for idl_CommTriMesh.vertices_p1 of type vector<unsigned int>
	 */
	inline CommTriMeshCore& setVertices_p1(const std::vector<unsigned int> &vertices_p1) { idl_CommTriMesh.vertices_p1 = vertices_p1; return *this; }
	inline bool setVertices_p1ElemAtPos(const size_t &pos, const unsigned int &elem) {
		if(pos < idl_CommTriMesh.vertices_p1.size()) {
			idl_CommTriMesh.vertices_p1[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertVertices_p1VectorAtPos(const size_t &pos, const std::vector<unsigned int> &data) {
		if(pos < idl_CommTriMesh.vertices_p1.size()) {
			idl_CommTriMesh.vertices_p1.insert(idl_CommTriMesh.vertices_p1.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeVertices_p1(const size_t &size) { idl_CommTriMesh.vertices_p1.resize(size); }
	inline bool eraseVertices_p1ElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommTriMesh.vertices_p1.size() ) {
			idl_CommTriMesh.vertices_p1.erase(idl_CommTriMesh.vertices_p1.begin()+pos, idl_CommTriMesh.vertices_p1.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearVertices_p1() { idl_CommTriMesh.vertices_p1.clear(); }
	
	// getter and setter for element Vertices_p2
	/**
	 * Getter methods for idl_CommTriMesh.vertices_p2 of type vector<unsigned int>
	 */
	inline std::vector<unsigned int>& getVertices_p2Ref() { return idl_CommTriMesh.vertices_p2; }
	inline std::vector<unsigned int> getVertices_p2Copy() const {
		return std::vector<unsigned int>(idl_CommTriMesh.vertices_p2.begin(), idl_CommTriMesh.vertices_p2.end());
	}
	inline unsigned int getVertices_p2ElemAtPos(const size_t &pos) const { return idl_CommTriMesh.vertices_p2[pos]; }
	inline size_t getVertices_p2Size() const { return idl_CommTriMesh.vertices_p2.size(); }
	inline bool isVertices_p2Empty() const { return idl_CommTriMesh.vertices_p2.empty(); }
	/**
	 * Setter methods for idl_CommTriMesh.vertices_p2 of type vector<unsigned int>
	 */
	inline CommTriMeshCore& setVertices_p2(const std::vector<unsigned int> &vertices_p2) { idl_CommTriMesh.vertices_p2 = vertices_p2; return *this; }
	inline bool setVertices_p2ElemAtPos(const size_t &pos, const unsigned int &elem) {
		if(pos < idl_CommTriMesh.vertices_p2.size()) {
			idl_CommTriMesh.vertices_p2[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertVertices_p2VectorAtPos(const size_t &pos, const std::vector<unsigned int> &data) {
		if(pos < idl_CommTriMesh.vertices_p2.size()) {
			idl_CommTriMesh.vertices_p2.insert(idl_CommTriMesh.vertices_p2.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeVertices_p2(const size_t &size) { idl_CommTriMesh.vertices_p2.resize(size); }
	inline bool eraseVertices_p2ElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommTriMesh.vertices_p2.size() ) {
			idl_CommTriMesh.vertices_p2.erase(idl_CommTriMesh.vertices_p2.begin()+pos, idl_CommTriMesh.vertices_p2.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearVertices_p2() { idl_CommTriMesh.vertices_p2.clear(); }
	
	// getter and setter for element Vertices_p3
	/**
	 * Getter methods for idl_CommTriMesh.vertices_p3 of type vector<unsigned int>
	 */
	inline std::vector<unsigned int>& getVertices_p3Ref() { return idl_CommTriMesh.vertices_p3; }
	inline std::vector<unsigned int> getVertices_p3Copy() const {
		return std::vector<unsigned int>(idl_CommTriMesh.vertices_p3.begin(), idl_CommTriMesh.vertices_p3.end());
	}
	inline unsigned int getVertices_p3ElemAtPos(const size_t &pos) const { return idl_CommTriMesh.vertices_p3[pos]; }
	inline size_t getVertices_p3Size() const { return idl_CommTriMesh.vertices_p3.size(); }
	inline bool isVertices_p3Empty() const { return idl_CommTriMesh.vertices_p3.empty(); }
	/**
	 * Setter methods for idl_CommTriMesh.vertices_p3 of type vector<unsigned int>
	 */
	inline CommTriMeshCore& setVertices_p3(const std::vector<unsigned int> &vertices_p3) { idl_CommTriMesh.vertices_p3 = vertices_p3; return *this; }
	inline bool setVertices_p3ElemAtPos(const size_t &pos, const unsigned int &elem) {
		if(pos < idl_CommTriMesh.vertices_p3.size()) {
			idl_CommTriMesh.vertices_p3[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertVertices_p3VectorAtPos(const size_t &pos, const std::vector<unsigned int> &data) {
		if(pos < idl_CommTriMesh.vertices_p3.size()) {
			idl_CommTriMesh.vertices_p3.insert(idl_CommTriMesh.vertices_p3.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeVertices_p3(const size_t &size) { idl_CommTriMesh.vertices_p3.resize(size); }
	inline bool eraseVertices_p3ElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommTriMesh.vertices_p3.size() ) {
			idl_CommTriMesh.vertices_p3.erase(idl_CommTriMesh.vertices_p3.begin()+pos, idl_CommTriMesh.vertices_p3.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearVertices_p3() { idl_CommTriMesh.vertices_p3.clear(); }
	
	// getter and setter for element Points_x
	/**
	 * Getter methods for idl_CommTriMesh.points_x of type vector<double>
	 */
	inline std::vector<double>& getPoints_xRef() { return idl_CommTriMesh.points_x; }
	inline std::vector<double> getPoints_xCopy() const {
		return std::vector<double>(idl_CommTriMesh.points_x.begin(), idl_CommTriMesh.points_x.end());
	}
	inline double getPoints_xElemAtPos(const size_t &pos) const { return idl_CommTriMesh.points_x[pos]; }
	inline size_t getPoints_xSize() const { return idl_CommTriMesh.points_x.size(); }
	inline bool isPoints_xEmpty() const { return idl_CommTriMesh.points_x.empty(); }
	/**
	 * Setter methods for idl_CommTriMesh.points_x of type vector<double>
	 */
	inline CommTriMeshCore& setPoints_x(const std::vector<double> &points_x) { idl_CommTriMesh.points_x = points_x; return *this; }
	inline bool setPoints_xElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_CommTriMesh.points_x.size()) {
			idl_CommTriMesh.points_x[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertPoints_xVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_CommTriMesh.points_x.size()) {
			idl_CommTriMesh.points_x.insert(idl_CommTriMesh.points_x.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizePoints_x(const size_t &size) { idl_CommTriMesh.points_x.resize(size); }
	inline bool erasePoints_xElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommTriMesh.points_x.size() ) {
			idl_CommTriMesh.points_x.erase(idl_CommTriMesh.points_x.begin()+pos, idl_CommTriMesh.points_x.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearPoints_x() { idl_CommTriMesh.points_x.clear(); }
	
	// getter and setter for element Points_y
	/**
	 * Getter methods for idl_CommTriMesh.points_y of type vector<double>
	 */
	inline std::vector<double>& getPoints_yRef() { return idl_CommTriMesh.points_y; }
	inline std::vector<double> getPoints_yCopy() const {
		return std::vector<double>(idl_CommTriMesh.points_y.begin(), idl_CommTriMesh.points_y.end());
	}
	inline double getPoints_yElemAtPos(const size_t &pos) const { return idl_CommTriMesh.points_y[pos]; }
	inline size_t getPoints_ySize() const { return idl_CommTriMesh.points_y.size(); }
	inline bool isPoints_yEmpty() const { return idl_CommTriMesh.points_y.empty(); }
	/**
	 * Setter methods for idl_CommTriMesh.points_y of type vector<double>
	 */
	inline CommTriMeshCore& setPoints_y(const std::vector<double> &points_y) { idl_CommTriMesh.points_y = points_y; return *this; }
	inline bool setPoints_yElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_CommTriMesh.points_y.size()) {
			idl_CommTriMesh.points_y[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertPoints_yVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_CommTriMesh.points_y.size()) {
			idl_CommTriMesh.points_y.insert(idl_CommTriMesh.points_y.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizePoints_y(const size_t &size) { idl_CommTriMesh.points_y.resize(size); }
	inline bool erasePoints_yElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommTriMesh.points_y.size() ) {
			idl_CommTriMesh.points_y.erase(idl_CommTriMesh.points_y.begin()+pos, idl_CommTriMesh.points_y.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearPoints_y() { idl_CommTriMesh.points_y.clear(); }
	
	// getter and setter for element Points_z
	/**
	 * Getter methods for idl_CommTriMesh.points_z of type vector<double>
	 */
	inline std::vector<double>& getPoints_zRef() { return idl_CommTriMesh.points_z; }
	inline std::vector<double> getPoints_zCopy() const {
		return std::vector<double>(idl_CommTriMesh.points_z.begin(), idl_CommTriMesh.points_z.end());
	}
	inline double getPoints_zElemAtPos(const size_t &pos) const { return idl_CommTriMesh.points_z[pos]; }
	inline size_t getPoints_zSize() const { return idl_CommTriMesh.points_z.size(); }
	inline bool isPoints_zEmpty() const { return idl_CommTriMesh.points_z.empty(); }
	/**
	 * Setter methods for idl_CommTriMesh.points_z of type vector<double>
	 */
	inline CommTriMeshCore& setPoints_z(const std::vector<double> &points_z) { idl_CommTriMesh.points_z = points_z; return *this; }
	inline bool setPoints_zElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_CommTriMesh.points_z.size()) {
			idl_CommTriMesh.points_z[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertPoints_zVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_CommTriMesh.points_z.size()) {
			idl_CommTriMesh.points_z.insert(idl_CommTriMesh.points_z.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizePoints_z(const size_t &size) { idl_CommTriMesh.points_z.resize(size); }
	inline bool erasePoints_zElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommTriMesh.points_z.size() ) {
			idl_CommTriMesh.points_z.erase(idl_CommTriMesh.points_z.begin()+pos, idl_CommTriMesh.points_z.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearPoints_z() { idl_CommTriMesh.points_z.clear(); }
};

} /* namespace CommObjectRecognitionObjects */
#endif /* COMMOBJECTRECOGNITIONOBJECTS_COMMTRIMESH_CORE_H_ */