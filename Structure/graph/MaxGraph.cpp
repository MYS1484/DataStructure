//
//  MaxGraph.cpp
//  Structure
//
//  Created by Yusuf Mike  on 7/22/24.
//

#include "MaxGraph.hpp"

// 判断图G是否存在边<x,y>或(x,y)
bool Adjacent(MGraph G, int x, int y) {
    if (x >= 0 && x < G.vexnum && y >= 0 && y < G.vexnum) {
        return G.Edge[x][y] != INFINITY;
    }
    return false;
}

// 列出图G中与结点x邻接的边
void Neighbors(MGraph G, int x) {
    if (x >= 0 && x < G.vexnum) {
        for (int i = 0; i < G.vexnum; i++) {
            if (G.Edge[x][i] != INFINITY) {
                printf("Edge from %c to %c with weight %d\n", G.Vex[x], G.Vex[i], G.Edge[x][i]);
            }
        }
    }
}

// 在图G中插入顶点x
void InsertVertex(MGraph &G, VertexType x) {
    if (G.vexnum < MaxVertexNum) {
        G.Vex[G.vexnum] = x;
        for (int i = 0; i <= G.vexnum; i++) {
            G.Edge[G.vexnum][i] = G.Edge[i][G.vexnum] = INFINITY;
        }
        G.vexnum++;
    }
}

// 从图G中删除顶点x
void DeleteVertex(MGraph &G, VertexType x) {
    int index = -1;
    for (int i = 0; i < G.vexnum; i++) {
        if (G.Vex[i] == x) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        for (int i = index; i < G.vexnum - 1; i++) {
            G.Vex[i] = G.Vex[i + 1];
            for (int j = 0; j < G.vexnum; j++) {
                G.Edge[i][j] = G.Edge[i + 1][j];
                G.Edge[j][i] = G.Edge[j][i + 1];
            }
        }
        G.vexnum--;
    }
}

// 若无向边(x,y)或有向边<x,y>不存在，则向图G中添加该边
void AddEdge(MGraph &G, int x, int y, EdgeType w) {
    if (x >= 0 && x < G.vexnum && y >= 0 && y < G.vexnum && G.Edge[x][y] == INFINITY) {
        G.Edge[x][y] = w;
        G.arcnum++;
    }
}

// 若无向边(x,y)或有向边<x,y>存在，则从图G中删除该边
void RemoveEdge(MGraph &G, int x, int y) {
    if (x >= 0 && x < G.vexnum && y >= 0 && y < G.vexnum && G.Edge[x][y] != INFINITY) {
        G.Edge[x][y] = INFINITY;
        G.arcnum--;
    }
}

// 求图G中顶点x的第一个邻接点，若有则返回顶点号。若x没有邻接点或图中不存在X,则返回-1
int FirstNeighbor(MGraph G, int x) {
    if (x >= 0 && x < G.vexnum) {
        for (int i = 0; i < G.vexnum; i++) {
            if (G.Edge[x][i] != INFINITY) {
                return i;
            }
        }
    }
    return -1;
}

// 假设图G中顶点y是顶点x的一个邻接点，返回除y之外顶点x的下一个邻接点的顶点号，若y是的最后一个邻接点，则返回-1
int NextNeighbor(MGraph G, int x, int y) {
    if (x >= 0 && x < G.vexnum && y >= 0 && y < G.vexnum) {
        for (int i = y + 1; i < G.vexnum; i++) {
            if (G.Edge[x][i] != INFINITY) {
                return i;
            }
        }
    }
    return -1;
}

// 获取图G中边(x,y)或<x,y>对应的权值
EdgeType Get_edge_value(MGraph G, int x, int y) {
    if (x >= 0 && x < G.vexnum && y >= 0 && y < G.vexnum) {
        return G.Edge[x][y];
    }
    return INFINITY;
}

// 设置图G中边(x,y)或<x,y>对应的权值为v
void Set_edge_value(MGraph &G, int x, int y, EdgeType v) {
    if (x >= 0 && x < G.vexnum && y >= 0 && y < G.vexnum) {
        G.Edge[x][y] = v;
    }
}

void BFS_MIN_Distance(MGraph G, int u){
    
}
