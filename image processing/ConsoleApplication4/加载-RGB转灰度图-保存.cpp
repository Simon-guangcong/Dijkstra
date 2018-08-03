//#https://blog.csdn.net/bcbobo21cn/article/details/50995657#commentBox
//
//#include<string>
//#include<iostream>
//#include<cv.h>
//#include<opencv2\core\core.hpp>
//#include<opencv2\highgui\highgui.hpp>
//#include <opencv2\opencv.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main() {
//	
//	string imagename = "Linejpg";
//
//	string gray_Name;
//
//	Mat image = imread(imagename, 1);
//
//	if (!image.data) {
//		cout << "ÎÞ·¨ÊäÈëÍ¼Ïñ" << endl;
//		return -1;
//	}
//
//	Mat image_gray;
//	cvtColor(image, image_gray, CV_RGB2GRAY);
//
//	imwrite("image_gray.jpg", image_gray);
//
//	namedWindow(imagename, CV_WINDOW_AUTOSIZE);
//	namedWindow(gray_Name, CV_WINDOW_AUTOSIZE);
//
//	imshow(imagename,image);
//	imshow(gray_Name, image_gray);
//
//	waitKey(0);
//
//	return 0;
//
//
//
//
//}