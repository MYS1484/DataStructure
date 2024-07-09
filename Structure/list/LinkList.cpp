//
//  LinkList.cpp
//  Structure
//
//  Created by Yusuf Mike  on 6/21/24.
//

#include "LinkList.hpp"

bool InitList(LinkList &L){
    L = NULL;
    return true;
}

bool InsertList(LinkList &L, int i, ElemType e){
    if (i<1){
        return false;
    }
    if (i==1){
        LNode *s = (LNode *) malloc(sizeof(LNode));
        s->data = e;
        s->next = L;
        L = s;
        return true;
    }
    LNode *p = L;
    int j=1;
    while (j<i-1 && p!=NULL) {
        p = p->next;
        j++;
    }
    if(p==NULL){
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data=e;
    s->next = p->next;
    p->next = s;
    return true;
}

bool DeleteList(LinkList &L, int i, ElemType &e){
    if(L==NULL || i<1){
        return false;
    }
    LNode *p = L;
    if (i==1){
        //处理单节点的情况
        if(p->next ==  NULL){
            e=p->data;
            L = NULL;
            return true;
        }else{
            e=p->data;
            L=p->next;
            return true;
        }
    }
    int j=2;
    //拿到要删除的节点
    while (j<i && p!=NULL) {
        p = p->next;
        j++;
    }
    e = p->next->data;
    p->next=p->next->next;
    return true;
}

// 头插法
LinkList List_HeadInsert(LinkList &L){
    int x;
    L = (LNode *)malloc(sizeof(LNode));
    L->next=NULL;
    scanf("%d", &x);
    while (x!=9999) {
        LNode *s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}

// 尾插法
LinkList List_TailInsert(LinkList &L){
    LNode *s, *r;
    int x;
    L = (LNode *)malloc(sizeof(LNode));
    r=L;
    scanf("%d", &x);
    while (x != 9999) {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r=s;
        scanf("%d", &x);
    }
    s->next=NULL;
    return L;
}

bool InitCycleLinkList(LinkList &L){
    L = (LNode *) malloc(sizeof(LNode));
    if (L== NULL) return false;
    L->next = L;
    return true;
}

bool IsEmptyCycleLinkList(LinkList L){
    if (L==NULL || L->next == L) {
        return true;
    }else{
        return false;
    }
}

bool IsTailCycleLinkList(LinkList L, LNode *p){
    if (p->next==L){
        return true;
    }else{
        return false;
    }
}

