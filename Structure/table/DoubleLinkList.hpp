//
//  DoubleLinkList.hpp
//  Structure
//
//  Created by Yusuf Mike  on 6/26/24.
//

#ifndef DoubleLinkList_hpp
#define DoubleLinkList_hpp

#include <iostream>
typedef int ElementType;

typedef struct DNode{
    ElementType data;
    struct DNode *prior, *next;
}DNode, *DLinkList;

bool InitDLinkList(DLinkList &L);
bool InsertNextDNode(DNode *p, DNode *s);
bool DestoryList(DLinkList &L);
bool DeleteNextDNode(DNode *p);

bool InitCycleDoubleLinkList(DLinkList &L);
bool isEmptyCycleDoubleLinkList(DLinkList L);
bool isTailCycleDoubleLinkList(DLinkList L, DNode *p);
#endif /* DoubleLinkList_hpp */
