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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------

//------------------------------------------------------------------------
//
//  Copyright (C) 2010 Manuel Wopfner
//
//        wopfner@hs-ulm.de
//
//        Christian Schlegel (schlegel@hs-ulm.de)
//        University of Applied Sciences
//        Prittwitzstr. 10
//        89075 Ulm (Germany)
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//--------------------------------------------------------------------------
#ifndef DOMAINVISION_COMMVIDEOIMAGE_H_
#define DOMAINVISION_COMMVIDEOIMAGE_H_

#include "DomainVision/CommVideoImageCore.hh"
#include <assert.h>

namespace DomainVision {
		
class CommVideoImage : public CommVideoImageCore {
	public:
		// default constructors
		CommVideoImage();
		
		CommVideoImage(unsigned int width, unsigned int height, DomainVision::FormatType format, const unsigned char *data = 0);

		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommVideoImage(const DomainVision::ImageParameters &parameter, const std::vector<unsigned char> &data, const CommBasicObjects::CommPose3d &sensor_pose, const CommBasicObjects::CommBaseState &base_state, const bool &is_valid, const unsigned int &seq_count, const std::vector<double> &intrinsic_m, const std::vector<double> &distortion_m, const DomainVision::ImageDistortionModel &distortion_model = DomainVision::ImageDistortionModel());
		
		CommVideoImage(const CommVideoImageCore &commVideoImage);
		CommVideoImage(const DATATYPE &commVideoImage);
		virtual ~CommVideoImage();
		
		// use framework specific getter and setter methods from core (base) class
		using CommVideoImageCore::get;
		using CommVideoImageCore::set;
		
		//
		// feel free to add customized methods here
		//

		inline CommBasicObjects::CommBaseState getBase_state() const
		{
			return CommBasicObjects::CommBaseState(idl_CommVideoImage.base_state);
		}
		inline void setBase_state(const CommBasicObjects::CommBaseState &base_state)
		{
			idl_CommVideoImage.base_state = base_state;
		}

		inline std::vector<unsigned char>& getDataRef()
		{
			return idl_CommVideoImage.data;
		}

		inline std::vector<double>& getIntrinsic_mRef()
		{
			return idl_CommVideoImage.intrinsic_m;
		}

		inline bool getIs_valid() const
		{
			return idl_CommVideoImage.is_valid;
		}
		inline void setIs_valid(const bool &is_valid)
		{
			idl_CommVideoImage.is_valid = is_valid;
		}

		inline DomainVisionIDL::ImageParameters getParameter() const
		{
			return DomainVisionIDL::ImageParameters(
					idl_CommVideoImage.parameter);
		}
		inline void setParameter(
				const DomainVisionIDL::ImageParameters &parameter)
		{
			idl_CommVideoImage.parameter = parameter;
		}

		inline CommBasicObjects::CommPose3d getSensor_pose() const
		{
			return CommBasicObjects::CommPose3d(idl_CommVideoImage.sensor_pose);
		}
		inline void setSensor_pose(const CommBasicObjects::CommPose3d &sensor_pose)
		{
			idl_CommVideoImage.sensor_pose = sensor_pose;
		}

		inline unsigned int getSeq_count() const
		{
			return idl_CommVideoImage.seq_count;
		}
		inline void setSeq_count(const unsigned int &seq_count)
		{
			idl_CommVideoImage.seq_count = seq_count;
		}

		//
		// add your customized interface here
		//

	//TODO get IDL should not be in user interface
		inline const DomainVisionIDL::CommVideoImage &get() const
		{
			return idl_CommVideoImage;
		}

		//TODO set IDL should not be in user interface
		inline void set(const DomainVisionIDL::CommVideoImage &obj)
		{
			idl_CommVideoImage = obj;
		}

		/**
		 * Get the pose of the sensor relative to the robot coordinate system.
		 */
		inline CommBasicObjects::CommPose3d get_sensor_pose() const {
			return idl_CommVideoImage.sensor_pose;
		}

		/**
		 * Get the state of the base.
		 */
		inline CommBasicObjects::CommBaseState get_base_state() const {
			return idl_CommVideoImage.base_state;
		}

		/**
		 Get the width of the image in pixels.
		 */
		inline unsigned int get_width() const {
			return idl_CommVideoImage.parameter.width;
		}

		/**
		 Get the height of the image in pixels.
		 */
		inline unsigned int get_height() const {
			return idl_CommVideoImage.parameter.height;
		}

		/**
		 Get the data format of the image.
		 The <a href="http://www.thedirks.org/v4l2/">Video4Linux Two documentation</a>
		 contains
		 <a href="http://www.thedirks.org/v4l2/v4l2fmt.htm">a nice description of these formats</a>.
		 Note that the integer values of the enum members of this class do not necessarily
		 correspond to the macro values of video4linux for the same format.
		 */
		inline DomainVision::FormatType get_format() const {
			return idl_CommVideoImage.parameter.format;
		}

		/**
		 Return the size of the image in memory in bytes.
		 */
		inline unsigned int get_size() const {
			return idl_CommVideoImage.parameter.size;
		}

		/**
		 Check if the image data is valid.
		 Image data may be invalid for example if the client requested a format which the
		 server isn't able to create.
		 At the moment, the server is configured by its ini file to one static format and size.
		 */
		inline bool is_data_valid() const {
			return idl_CommVideoImage.is_valid;
		}

		/**
		 Returns the server sided sequence counter of this image.
		 Use it to see if your client drops frames.
		 */
		inline unsigned long get_sequence_counter() const {
			return idl_CommVideoImage.seq_count;
		}


		/**
		 Return a pointer to the image data.
		 */
		inline const unsigned char* get_data() const {
			// does for our usecase only work when float's between corba and c++-type match!
			assert(sizeof(char) == sizeof(DomainVisionIDL::CommVideoImage_data_type::value_type));

			return  &(idl_CommVideoImage.data[0]);
		}

		unsigned int get_size_as_rgb24() const;
		void get_as_rgb24(unsigned char *target) const;

		unsigned int get_size_as_rgb32() const;
		void get_as_rgb32(unsigned char *target) const;

		inline unsigned int get_size_as_bgr24() const {
			return get_size_as_rgb24();
		}
		void get_as_bgr24(unsigned char *target) const;

		inline unsigned int get_size_as_bgr32() const {
			return get_size_as_rgb32();
		}
		void get_as_bgr32(unsigned char *target) const;

		/**
		 Check if this image has a certain format.
		 */
		bool has_parameters(unsigned int width, unsigned int height, DomainVision::FormatType format) const;

		//
		// helper functions for format handling
		//

		/**
		 Try to convert a string description of a format into the
		 corresponding enumeration member.
		 Returns \c false on failure.
		 */
		static bool string2format(const std::string &name, DomainVision::FormatType &format);

		/**
		 Return a string describing the image format.
		 This string can be converted back to an enum member using string2format.
		 */
		static std::string format2string(DomainVision::FormatType format);

		/**
		 Return the average number of bits per pixel for a given image format.
		 */
		static unsigned int depth(DomainVision::FormatType format);

		/**
		 Adjust the image size to values permitted by the indicated format.
		 Certain formats require the image width to be an even number of pixels etc.
		 */
		static void adjust_size(unsigned int &width, unsigned int &height, DomainVision::FormatType format);


		//	static inline void yuv2rgb(const unsigned char y, const unsigned char u, const unsigned char v, unsigned char &r,
		//			unsigned char &g, unsigned char &b);

		static inline void yuv2rgb(const unsigned char y, const unsigned char u, const unsigned char v, unsigned char &r, unsigned char &g, unsigned char &b) {
				/* Old Version which has not been tested
				 const float fy = 1.1643836 * (y -  16);
				 const float fu = 1.1339286 * (u - 128);
				 const float fv = 1.1339286 * (v - 128);
				 const float fr = fy + 1.402 * fv;
				 const float fg = fy - 0.344 * fu - 0.714 * fv;
				 const float fb = fy + 1.772 * fu;
				 */

				/* Old Version which function properly and has been used before the libdc1394 version
				 const float fr = y + 1.402 * (v - 128);
				 const float fg = y - 0.344 * (u - 128) - 0.714 * (v - 128);
				 const float fb = y + 1.772 * (u - 128);
				 */

				/* This block is needed to convert the float back to unsigned char
				 r = (fr<0)?0:(fr>255)?255:((unsigned char)::rint(fr));
				 g = (fg<0)?0:(fg>255)?255:((unsigned char)::rint(fg));
				 b = (fb<0)?0:(fb>255)?255:((unsigned char)::rint(fb));
				 */

				/**
				 * This block is taken from the libdc1394 library.
				 *
				 * The only modification is the subtraction of 128 from u and v because we use unsigned and have to shift it.
				 *
				 * The speed up of this version against the old version is about 3 to 6 times.
				 * Old Version conversion has been done in 60 to 70 ms on a 1024x768pixel (YUV422-UYVY) image.
				 * This image has then been converted into RGB32 with the same size.
				 * This Version converts in 10 to 20 ms on the same image.
				 */
				int fr = y + (((v - 128) * 1436) >> 10);
				int fg = y - (((u - 128) * 352 + (v - 128) * 731) >> 10);
				int fb = y + (((u - 128) * 1814) >> 10);
				fr = fr < 0 ? 0 : fr;
				fg = fg < 0 ? 0 : fg;
				fb = fb < 0 ? 0 : fb;
				r = fr > 255 ? 255 : fr;
				g = fg > 255 ? 255 : fg;
				b = fb > 255 ? 255 : fb;

			}


		static inline void yuv2bgr(const unsigned char y, const unsigned char u, const unsigned char v, unsigned char &b,
				unsigned char &g, unsigned char &r) {
			yuv2rgb(y, u, v, r, g, b);
		}



	private:
		void _get_as_rgb(unsigned char *target, int mode) const;
		void _get_as_bgr(unsigned char *target, int mode) const;

	public:
		/**
		 * Set the pose of the sensor relative to the robot coordinate system.
		 */
		inline void set_sensor_pose(const CommBasicObjects::CommPose3d& pose) {
			idl_CommVideoImage.sensor_pose = pose;
		}

		/**
		 * Set the state of the base.
		 */
		inline void set_base_state(const CommBasicObjects::CommBaseState& state) {
			idl_CommVideoImage.base_state = state;
		}

		/**
		 Set the valid flag of the data to false.
		 The flag is automatically set to true if data is written to the image.
		 Thus the server either writes data to the image or sets the valid flag to false.
		 */
		void set_data_invalid();

		/**
		 Set the sequence counter of the image.
		 */
		void set_sequence_counter(unsigned long int n);

		/**
		 Copy image data from the memory chunk at \a data to the internal shared memory.
		 The number of bytes to copy is derived from the internal format and size descriptions.
		 */
		void set_data(const unsigned char *data);


		/**
			 Set the parameters of an image.
			 This causes currently attached shared memory to be detached, and a new shared memory segment
			 to be allocated.
		 */
		void set_parameters(unsigned int width, unsigned int height, DomainVision::FormatType format);



		/**
		 * Get the intrinsic matrix of the color camera.
		 */
		inline const arma::mat get_intrinsic()
		{

			arma::mat m(4, 4);
			for (size_t i = 0; i < 4; ++i)
			{
				for (size_t j = 0; j < 4; j++)
				{
					m(i, j) = idl_CommVideoImage.intrinsic_m[i*4 + j]; // _m is 1-dimension!
				}
			}

			return m;
		}

		/**
		 * set the intrinsic matrix of the color camera.
		 */
		inline void set_intrinsic(const arma::mat& mat)
		{

			if (mat.n_cols != 4 && mat.n_rows != 4)
			{
				return;
			}

			arma::mat m(4, 4);
			for (size_t i = 0; i < 4; ++i)
			{
				for (size_t j = 0; j < 4; j++)
				{
					idl_CommVideoImage.intrinsic_m[i*4 + j] = mat(i, j);
				}
			}
		}

		/**
		 * Get the distortion matrix of the color camera.
		 */
		inline const arma::mat get_distortion()
		{

			arma::mat m(1, 5);
			for (size_t i = 0; i < 4; ++i)
			{
					m(0, i) = idl_CommVideoImage.distortion_m[i];

			}

			return m;
		}

		/**
		 * set the intrinsic matrix of the color camera.
		 */
		inline void set_distortion(const arma::mat& mat)
		{

			if (mat.n_cols != 5 && mat.n_rows != 1)
			{
				return;
			}
			for (size_t i = 0; i < 5; ++i)
			{
			idl_CommVideoImage.distortion_m[i] = mat(0, i);

			}
		}
};

inline std::ostream &operator<<(std::ostream &os, const CommVideoImage &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace DomainVision */
#endif /* DOMAINVISION_COMMVIDEOIMAGE_H_ */