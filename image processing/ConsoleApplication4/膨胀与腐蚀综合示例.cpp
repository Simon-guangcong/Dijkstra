//// https://blog.csdn.net/bcbobo21cn/article/details/50995657#commentBox
//
//#include<iostream>
//#include<opencv2\core\core.hpp>
//#include<opencv2\highgui\highgui.hpp>
//#include<opencv2\imgproc\imgproc.hpp>
//
//using namespace std;
//using namespace cv;
//
//void Process();
//void on_TrackbarNumChange(int,void*);
//void on_ElementSizeChange(int,void*);
//
//
//Mat g_scrImage;   //原图
//Mat g_dstImage;   //结果图
//
//int g_nTrackbarNumber = 0;
//int g_nStructElementSize = 9;    //内核矩阵
//
//int main() {
//
//	system("color5E");  //改变控制台颜色
//
//	g_scrImage = imread("Line.jpg");
//
//	if (!g_scrImage.data) {
//
//		cout << "载入图片失败!" << endl;
//		return -1;
//	}
//
//
//	//显示原始图
//	namedWindow("原图");
//	imshow("原图", g_scrImage);
//
//	//初始腐蚀
//	namedWindow("效果图");
//
//	//自定义核
//	Mat element = getStructuringElement(MORPH_RECT, Size(2 * g_nStructElementSize + 1, 2 * g_nStructElementSize + 1),
//		Point(g_nStructElementSize, g_nStructElementSize));
//
//	erode(g_scrImage, g_dstImage, element);
//
//	imshow("效果图", g_dstImage);
//
//	//创建轨迹条
//	createTrackbar("腐蚀/膨胀", "效果图", &g_nTrackbarNumber, 1, on_TrackbarNumChange);
//	createTrackbar("内核尺寸", "效果图", &g_nStructElementSize, 23, on_ElementSizeChange);
//
//	cout << endl << "\t嗯。运行成功，请调整滚动条观察图像效果~\n\n"
//		<< "\t按下“q”键时，程序退出~!\n"
//		<< "\n\n\t\t\t\tby mr.";
//
//	while (char(waitKey(1)) != 'q'){}
//
//	return 0;
//
//
//}
//
//void Process()
//{
//	Mat element = getStructuringElement(MORPH_RECT, Size(2 * g_nStructElementSize + 1, 2 * g_nStructElementSize + 1),
//		Point(g_nStructElementSize, g_nStructElementSize));
//
//	if (g_nTrackbarNumber == 0)
//	{
//		erode(g_scrImage, g_dstImage, element);
//	}
//	else
//	{
//		dilate(g_scrImage, g_dstImage, element);
//	}
//}
//
//
//
//	void on_TrackbarNumChange(int, void*) {
//		
//		Process();
//	}
//
//	void on_ElementSizeChange(int, void*) {
//		Process();
//	}
//
