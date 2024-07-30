//
//  MaxGraph.hpp
//  Structure
//
//  Created by Yusuf Mike  on 7/22/24.
//

#ifndef MaxGraph_hpp
#define MaxGraph_hpp

#include <iostream>
#include <stdbool.h>
#include <string.h>
#define MaxVertexNum 100
#define INFINITY 999999 // 表示无穷大
typedef char VertexType;
typedef int EdgeType;
typedef struct {
    VertexType Vex[MaxVertexNum];
    EdgeType Edge[MaxVertexNum][MaxVertexNum];
    int vexnum,arcnum;
}MGraph;

// 判断图G是否存在边<x,y>或(x,y)
bool Adjacent(MGraph G,int x,int y);
// 列出图G中与结点x邻接的边
void Neighbors(MGraph G,int x);
// 在图G中插入顶点x
void InsertVertex(MGraph &G,VertexType x);
// 从图G中删除顶点x
void DeleteVertex(MGraph &G,VertexType x);
// 若无向边(x,y)或有向边<x,y>不存在，则向图G中添加该边
void AddEdge(MGraph &G,int x,int y, EdgeType w);
// 若无向边(x,y)或有向边<x,y>存在，则从图G中删除该边
void RemoveEdge(MGraph &G,int x,int y);
// 求图G中顶点x的第一个邻接点，若有则返回顶点号。若x没有邻接点或图中不存在X,则返回-1
int FirstNeighbor(MGraph G,int x);
// 假设图G中顶点y是顶点x的一个邻接点，返回除y之外顶点x的下一个邻接点的顶点号，若y是的最后一个邻接点，则返回-1
int NextNeighbor(MGraph G,int x,int y);
// 获取图G中边(x,y)或<x,y>对应的权值
EdgeType Get_edge_value(MGraph G,int x,int y);
// 设置图G中边(x,y)或<x,y>对应的权值为v
void Set_edge_value(MGraph &G,int x,int y,int v);

// Breadth First Search
void BFS_MIN_Distance(MGraph G, int u);


#endif /* MaxGraph_hpp */
