#ifndef _RRT_H
#define _RRT_H

#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class node {
private:
    float x, y;                // �ڵ�����
    vector<float> pathX, pathY;// ·��
    node* parent;              // ���ڵ�
    float cost;
public:
    node(float _x, float _y);
    float getX(); // 读
    float getY(); // 读
    void setParent(node*); // 写
    node* getParent();  // 读
};

class RRT {
private:
    node* startNode, * goalNode;        // ��ʼ�ڵ��Ŀ��ڵ�
    vector<vector<float>> obstacleList; // �ϰ���
    vector<node*> nodeList;             // 
    float stepSize;                     // ����

    int goal_sample_rate;

    random_device goal_rd;
    mt19937 goal_gen;
    uniform_int_distribution<int> goal_dis;

    random_device area_rd;
    mt19937 area_gen;
    uniform_real_distribution<float> area_dis;
public:
    RRT(node*, node*, const vector<vector<float>>&, float , int);
    node* getNearestNode(const vector<float>&);
    bool collisionCheck(node*);
    vector<node*> planning();
};

#endif
