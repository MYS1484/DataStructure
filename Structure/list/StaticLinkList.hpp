//
//  StaticLinkList.hpp
//  Structure
//
//  Created by Yusuf Mike  on 7/1/24.
//

#ifndef StaticLinkList_hpp
#define StaticLinkList_hpp

#define MaxSize 10
#include <iostream>
typedef int ElemType;

// 循环链表
struct Node {
    ElemType data;
    int next;
};
typedef struct Node SLinkList[MaxSize];

void InitStaticLinkList(SLinkList &L);


#endif /* StaticLinkList_hpp */
