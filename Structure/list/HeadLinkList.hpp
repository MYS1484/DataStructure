//
//  HeadLinkList.hpp
//  Structure
//
//  Created by Yusuf Mike  on 6/21/24.
//

#ifndef HeadLinkList_hpp
#define HeadLinkList_hpp

#include <iostream>
typedef int ElemType;

#define MaxSize 10   // define maxinum length
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode, *HeadLinkList;

bool InitHeadList(HeadLinkList &L);
bool InsertHeadList(HeadLinkList &L, int i,ElemType e);
bool DeleteHeadList(HeadLinkList &L, int i,ElemType &e);
bool InsertNextNode(LNode *p, ElemType e);
bool InsertPriorNode(LNode *p, ElemType e);

LNode * GetHeadElem(HeadLinkList L, int i);
LNode * LocateHeadElem(HeadLinkList L, ElemType e);
int Length(HeadLinkList L);


#endif /* LinkList_hpp */
