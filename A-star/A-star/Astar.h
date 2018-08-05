#pragma once
//https://blog.csdn.net/u012234115/article/details/47152137
/*
//�㷨������  
*/

#include<vector>
#include<list>

using namespace std;

const int KCost1 = 10;
const int KCost2 = 14;

struct  Point
{
	int x, y;
	int F, G, H;
	Point *parent;
	Point(int _x, int _y) : x(_x), y(_y), F(0), G(0), H(0), parent(NULL)  //������ʼ��
	{
	}
};

class  Astar
{
public:
	void InitAstar(vector<vector<int>>&_maze);
	list<Point*>GetPath(Point &startPoint,Point &endPoint,bool isIgnoreCorner);

private:
	Point *findPath(Point &startPoint, Point &endPoint, bool isIgnoreCorner);
	vector<Point *>getSurroundPoints(const Point *point, bool isIgnoreCorner) const;
	bool isCanreach(const Point *point,const Point *target,bool isIgnoreCorner) const;  //�ж�ĳ���Ƿ����������һ���ж�
	Point *isInList(const list<Point *>&list,const Point *point) const;                 //�жϿ���/�ر��б����Ƿ����ĳ��
	Point *getLeastFpoint();                                                            //�ӿ����б��з���Fֵ��С�Ľڵ�
	//����FGHֵ
	int calcG(Point *temp_start,Point *point);
	int calcH(Point *point,Point *end);
	int calcF(Point *point);
private:
	vector<vector<int>>maze;
	list<Point *>openList;   //�����б�
	list<Point *>closeList;
};

