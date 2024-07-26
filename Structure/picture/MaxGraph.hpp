//
//  MaxGraph.hpp
//  Structure
//
//  Created by Yusuf Mike  on 7/22/24.
//

#ifndef MaxGraph_hpp
#define MaxGraph_hpp

#include <iostream>
#define MaxVertexNum 100
typedef char VertexType;
typedef int EdgeType;
typedef struct {
    VertexType Vex[MaxVertexNum];
    EdgeType Edge[MaxVertexNum][MaxVertexNum];
    int vexnum,arcnum;
}MGraph;

void BFS_MIN_Distance(MGraph G, int u);
#endif /* MaxGraph_hpp */
