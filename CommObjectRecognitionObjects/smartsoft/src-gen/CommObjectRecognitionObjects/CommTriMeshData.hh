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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_COMMTRIMESH_DATA_H_
#define COMMOBJECTRECOGNITIONOBJECTS_COMMTRIMESH_DATA_H_


#include <vector>

namespace CommObjectRecognitionObjectsIDL 
{
	typedef std::vector<unsigned int> CommTriMesh_vertices_p1_type;
	typedef std::vector<unsigned int> CommTriMesh_vertices_p2_type;
	typedef std::vector<unsigned int> CommTriMesh_vertices_p3_type;
	typedef std::vector<double> CommTriMesh_points_x_type;
	typedef std::vector<double> CommTriMesh_points_y_type;
	typedef std::vector<double> CommTriMesh_points_z_type;
	struct CommTriMesh
	{
		CommTriMesh_vertices_p1_type vertices_p1;
		CommTriMesh_vertices_p2_type vertices_p2;
		CommTriMesh_vertices_p3_type vertices_p3;
		CommTriMesh_points_x_type points_x;
		CommTriMesh_points_y_type points_y;
		CommTriMesh_points_z_type points_z;
  	};
};

#endif /* COMMOBJECTRECOGNITIONOBJECTS_COMMTRIMESH_DATA_H_ */
