#include<iostream>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/objdetect/objdetect.hpp>


using namespace std;
using namespace cv;

CascadeClassifier faceCascade;

int main()
{
	faceCascade.load("D:/opencv/opencv/sources/data/haarcascades/haarcascade_frontalface_alt2.xml");

	VideoCapture capture;
	capture.open(0);

	if (!capture.isOpened())
	{
		cout << "open camera failed." << endl;
		return -1;
	}

	Mat img, imgGray;
	vector<Rect> faces;

	while (1)
	{
		capture >> img;
		if (img.empty())
		{
			continue;
		}

		if (img.channels() == 3)
		{
			cvtColor(img, imgGray, CV_RGB2GRAY);
		}
		else
		{
			imgGray = img;
		}

		faceCascade.detectMultiScale(imgGray, faces, 1.2, 6, 0, Size(0, 0));

		if (faces.size() > 0)
		{
			for (int i = 0; i < faces.size(); i++)
			{
				rectangle(img, Point(faces[i].x,faces[i].y),Point(faces[i].x+faces[i].width,faces[i].y+faces[i].height),Scalar(0,255,0),1,8);
			}
		}
		imshow("CamerFace",img);

		if (waitKey(1)>0)
		{
			break;
		}
	}
}