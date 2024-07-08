//
//  LinkList.hpp
//  Structure
//
//  Created by Yusuf Mike  on 6/21/24.
//

#ifndef LinkList_hpp
#define LinkList_hpp

#include <iostream>
typedef int ElementType;

#define MaxSize 10   // define maxinum length
typedef struct LNode{
    ElementType data;
    struct LNode *next;
}LNode, *LinkList;

bool InitList(LinkList &L);
bool InsertList(LinkList &L, int i,ElementType e);
bool DeleteList(LinkList &L, int i,ElementType &e);

// 头插法
LinkList List_HeadInsert(LinkList &L);
// 尾插法
LinkList List_TailInsert(LinkList &L);

bool InitCycleLinkList(LinkList &L);
bool isEmptyCycleLinkList(LinkList L);
bool isTailCycleLinkList(LinkList L, LNode *p);
#endif /* LinkList_hpp */
