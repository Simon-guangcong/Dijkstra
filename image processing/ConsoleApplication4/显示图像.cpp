////#https://blog.csdn.net/bcbobo21cn/article/details/50995657
//
//#include<stdio.h>
//#include<string>
//#include<iostream>
//#include<opencv2\core\core.hpp>
//#include<opencv2\highgui\highgui.hpp>
//
//using namespace std;
//using namespace cv;
//
//int main() {
//	
//	string imgname = "Line.jpg";
//
//	Mat image = imread(imgname, CV_LOAD_IMAGE_COLOR);
//
//	if (image.empty()) {
//		cout << "ÎÞ·¨¼ÓÔØÍ¼Æ¬£¡" << endl;
//		return -1;
//	}
//
//	cvNamedWindow("123",CV_WINDOW_AUTOSIZE);
//
//	imshow("123",image);
//
//	waitKey(0);
//
//	return 0;
//}