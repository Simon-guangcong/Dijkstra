//#pragma once
//#include<opencv\cv.h>
//#include<opencv\highgui.h>
//#pragma comment(lib,"opencv_core231d.lib")
//#pragma comment(lib,"opencv_highgui231d.lib")
//#pragma comment(lib,"opencv_imgproc231d.lib")
//#include<iostream>
//#include<iostream>
//#include<opencv2\core\core.hpp>
//#include<opencv2\highgui\highgui.hpp>
//#include<opencv2\imgproc\imgproc.hpp>
//
//using namespace cv;
//using namespace std;
//
//namespace ggicci
//{
//	void sharpen(const Mat& img, Mat &result);
//}
//
//void ggicci::sharpen(const Mat& img, Mat &result)
//{
//	result.create(img.size(), img.type());
//
//	for (int row = 1; row < img.rows - 1; row++)
//	{
//		const uchar* previous = img.ptr<const uchar>(row-1);
//		const uchar* current = img.ptr<const uchar>(row);
//		const uchar* next = img.ptr<const uchar>(row + 1);
//
//		uchar *output = result.ptr<uchar>(row);
//		int ch = img.channels();
//		int starts = ch;
//		int ends = (img.cols - 1)*ch;  //cols  列数
//
//		for (int col = starts; col < ends; col++)
//		{
//			*output++ = saturate_cast<uchar>(5 * current[col] - current[col - ch] - current
//				[col + ch] - previous[col] - next[col]);
//		}
//
//	}
//
//	result.row(0).setTo(Scalar::all(0));
//	result.row(result.rows - 1).setTo(Scalar::all(0));
//	result.col(0).setTo(Scalar::all(0));
//	result.col(result.cols - 1).setTo(Scalar::all(0));
//}
//
//
//int main()
//{
//	Mat image = imread("Line.jpg");
//
//	Mat sharpenedImage;
//
//	ggicci::sharpen(image, sharpenedImage);
//
//	imshow("原图", image);
//	imshow("锐化",sharpenedImage);
//
//	waitKey(0);
//	return 0;
//}
//
//
