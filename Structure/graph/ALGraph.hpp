//
//  ALGraph.hpp
//  Structure
//
//  Created by Yusuf Mike  on 8/2/24.
//

#ifndef ALGraph_hpp
#define ALGraph_hpp

#include <iostream>
#include <stdlib.h>
#define MaxVertexNum 100
typedef char VertexType; // 顶点
typedef int EdgeType;  // 边

// 边节点
typedef struct ArcNode{
    int adjvex;             // 邻接点在顶点数组中的位置
    struct ArcNode *next;   // 指向下一条边的指针
    //InfoType info;        // 边的相关信息(如果有)
}ArcNode;

// 顶点节点
typedef struct VNode{
    VertexType data;        // 顶点数据
    ArcNode *first;         // 指向第一条依附于该顶点的边的指针
}VNode, AdjList[MaxVertexNum];

// 图结构
typedef struct {
    AdjList vertices;       // 顶点数组
    int vexnum,arcnum;      // 顶点数
}ALGraph;                   // 边数

void InitGraph(ALGraph &G, int vertexNum);
void AddVertex(ALGraph &G, int index, VertexType data);
void AddEdge(ALGraph &G, int start, int end);
void PrintGraph(ALGraph G);

#endif /* ALGraph_hpp */
