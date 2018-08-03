//#include<opencv2\core\core.hpp>
//#include<opencv2\highgui\highgui.hpp>
//#include<opencv2\imgproc\imgproc.hpp>
//#include<iostream>
//
//using namespace std;
//using namespace cv;
//
//int main() {
//
//	string imageName;
//	Mat image = imread("Line.jpg");
//
//	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
//	Mat out;
//
//	erode(image, out, element);
//
//	namedWindow("image");
//	namedWindow("out");
//
//	imshow("image", image);
//	imshow("out", out);
//
//	imwrite("¸¯Ê´.jpg", out);
//
//	waitKey(0);
//	return 0;
//}