//
//  main.cpp
//  Structure
//
//  Created by Yusuf Mike  on 6/18/24.
//

//#include <iostream>
//#include "SequenceList.hpp"
//#include "DynamicSequenceList.hpp"
//#include "HeadLinkList.hpp"
#include "MaxGraph.hpp"
//using namespace::std;

int main() {
    MGraph G;
        G.vexnum = 0;
        G.arcnum = 0;
        // 初始化图的边
        for (int i = 0; i < MaxVertexNum; i++) {
            for (int j = 0; j < MaxVertexNum; j++) {
                G.Edge[i][j] = INFINITY;
            }
        }

        // 插入顶点
        InsertVertex(G, 'A');
        InsertVertex(G, 'B');
        InsertVertex(G, 'C');
        InsertVertex(G, 'D');

        // 添加边
        AddEdge(G, 0, 1, 1); // A-B
        AddEdge(G, 1, 2, 2); // B-C
        AddEdge(G, 2, 3, 3); // C-D
        AddEdge(G, 3, 0, 4); // D-A

        // 测试邻接
        printf("Adjacent(A, B): %d\n", Adjacent(G, 0, 1));
        printf("Adjacent(A, C): %d\n", Adjacent(G, 0, 2));

        // 列出顶点A的邻接边
        printf("Neighbors of A:\n");
        Neighbors(G, 0);

        // 获取边的权重
        printf("Edge value A-B: %d\n", Get_edge_value(G, 0, 1));

        // 设置边的权重
        Set_edge_value(G, 0, 1, 5);
        printf("Updated Edge value A-B: %d\n", Get_edge_value(G, 0, 1));

        // 删除边
        RemoveEdge(G, 0, 1);
        printf("After removing edge A-B, Adjacent(A, B): %d\n", Adjacent(G, 0, 1));

        // 删除顶点
        DeleteVertex(G, 'C');
        printf("After deleting vertex C, number of vertices: %d\n", G.vexnum);

        return 0;
}
