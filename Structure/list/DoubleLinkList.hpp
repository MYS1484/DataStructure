//
//  DoubleLinkList.hpp
//  Structure
//
//  Created by Yusuf Mike  on 6/26/24.
//

#ifndef DoubleLinkList_hpp
#define DoubleLinkList_hpp

#include <iostream>
typedef int ElemType;

typedef struct DNode{
    ElemType data;
    struct DNode *prior, *next;
}DNode, *DLinkList;

bool InitDLinkList(DLinkList &L);
bool InsertNextDNode(DNode *p, DNode *s);
bool DestoryList(DLinkList &L);
bool DeleteNextDNode(DNode *p);

bool InitCycleDoubleLinkList(DLinkList &L);
bool IsEmptyCycleDoubleLinkList(DLinkList L);
bool IsTailCycleDoubleLinkList(DLinkList L, DNode *p);
#endif /* DoubleLinkList_hpp */
