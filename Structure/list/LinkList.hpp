//
//  LinkList.hpp
//  Structure
//
//  Created by Yusuf Mike  on 6/21/24.
//

#ifndef LinkList_hpp
#define LinkList_hpp

#include <iostream>
typedef int ElemType;

#define MaxSize 10   // define maxinum length
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode, *LinkList;

bool InitList(LinkList &L);
bool InsertList(LinkList &L, int i,ElemType e);
bool DeleteList(LinkList &L, int i,ElemType &e);

// 头插法
LinkList List_HeadInsert(LinkList &L);
// 尾插法
LinkList List_TailInsert(LinkList &L);

bool InitCycleLinkList(LinkList &L);
bool IsEmptyCycleLinkList(LinkList L);
bool IsTailCycleLinkList(LinkList L, LNode *p);
#endif /* LinkList_hpp */
