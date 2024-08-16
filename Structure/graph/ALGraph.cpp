//
//  ALGraph.cpp
//  Structure
//
//  Created by Yusuf Mike  on 8/2/24.
//

#include "ALGraph.hpp"

// 初始化图
void InitGraph(ALGraph &G, int vertexNum) {
    G.vexnum = vertexNum;
    G.arcnum = 0;
    for (int i = 0; i < vertexNum; i++) {
        G.vertices[i].first = NULL;
    }
}

// 添加顶点
void AddVertex(ALGraph &G, int index, VertexType data) {
    if (index >= 0 && index < G.vexnum) {
        G.vertices[index].data = data;
    }
}

// 添加边
void AddEdge(ALGraph &G, int start, int end) {
    if (start >= 0 && start < G.vexnum && end >= 0 && end < G.vexnum) {
        ArcNode *newNode = (ArcNode *)malloc(sizeof(ArcNode));
        newNode->adjvex = end;
        newNode->next = G.vertices[start].first;
        G.vertices[start].first = newNode;
        G.arcnum++;
    }
}

// 打印图
void PrintGraph(ALGraph G) {
    for (int i = 0; i < G.vexnum; i++) {
        printf("%c: ", G.vertices[i].data);
        ArcNode *node = G.vertices[i].first;
        while (node) {
            printf("-> %c ", G.vertices[node->adjvex].data);
            node = node->next;
        }
        printf("\n");
    }
}
