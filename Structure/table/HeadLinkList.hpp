//
//  HeadLinkList.hpp
//  Structure
//
//  Created by Yusuf Mike  on 6/21/24.
//

#ifndef HeadLinkList_hpp
#define HeadLinkList_hpp

#include <iostream>
typedef int ElementType;

#define MaxSize 10   // define maxinum length
typedef struct LNode{
    ElementType data;
    struct LNode *next;
}LNode, *HeadLinkList;

bool InitHeadList(HeadLinkList &L);
bool InsertHeadList(HeadLinkList &L, int i,ElementType e);
bool DeleteHeadList(HeadLinkList &L, int i,ElementType &e);
bool InsertNextNode(LNode *p, ElementType e);
bool InsertPriorNode(LNode *p, ElementType e);

LNode * GetHeadElem(HeadLinkList L, int i);
LNode * LocateHeadElem(HeadLinkList L, ElementType e);
int Length(HeadLinkList L);


#endif /* LinkList_hpp */
