//https://blog.csdn.net/qq_35644234/article/details/60870719

#pragma once

#include<iostream>
#include<string>

using namespace std;

/*
��������ʹ��Dijkstra�㷨ʵ��������·��������
���õ��ڽӾ������洢ͼ
*/

//��¼��㵽ÿ����������·������Ϣ
struct Dis
{
	string path;
	int value;
	bool visit;
	Dis() {
		visit = false;
		value = 0;
		path = "";
	}
};

class  Graph_DG
{
public:
	//���캯��
	 Graph_DG(int vexnum,int edge);
	 //��������
	~ Graph_DG();
	// �ж�����ÿ������ĵıߵ���Ϣ�Ƿ�Ϸ�
	//�����1��ʼ���
	bool check_edge_value(int start,int end,int weight);
	//����ͼ
	void createGraph();
	//��ӡ�ڽӾ���
	void print();
	//�����·��
	void Dijkstra(int begin);
	//��ӡ���·��
	void print_path(int);

private:
	int vexnum; //ͼ�Ķ������
	int edge;	//ͼ�ı���
	int **arc;	//�ڽӾ���
	Dis *dis;	//��¼�����������·������Ϣ
};


