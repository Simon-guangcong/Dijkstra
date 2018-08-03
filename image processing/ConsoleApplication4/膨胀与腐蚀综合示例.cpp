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
//Mat g_scrImage;   //ԭͼ
//Mat g_dstImage;   //���ͼ
//
//int g_nTrackbarNumber = 0;
//int g_nStructElementSize = 9;    //�ں˾���
//
//int main() {
//
//	system("color5E");  //�ı����̨��ɫ
//
//	g_scrImage = imread("Line.jpg");
//
//	if (!g_scrImage.data) {
//
//		cout << "����ͼƬʧ��!" << endl;
//		return -1;
//	}
//
//
//	//��ʾԭʼͼ
//	namedWindow("ԭͼ");
//	imshow("ԭͼ", g_scrImage);
//
//	//��ʼ��ʴ
//	namedWindow("Ч��ͼ");
//
//	//�Զ����
//	Mat element = getStructuringElement(MORPH_RECT, Size(2 * g_nStructElementSize + 1, 2 * g_nStructElementSize + 1),
//		Point(g_nStructElementSize, g_nStructElementSize));
//
//	erode(g_scrImage, g_dstImage, element);
//
//	imshow("Ч��ͼ", g_dstImage);
//
//	//�����켣��
//	createTrackbar("��ʴ/����", "Ч��ͼ", &g_nTrackbarNumber, 1, on_TrackbarNumChange);
//	createTrackbar("�ں˳ߴ�", "Ч��ͼ", &g_nStructElementSize, 23, on_ElementSizeChange);
//
//	cout << endl << "\t�š����гɹ���������������۲�ͼ��Ч��~\n\n"
//		<< "\t���¡�q����ʱ�������˳�~!\n"
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
