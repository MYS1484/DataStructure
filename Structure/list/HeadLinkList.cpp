//
//  HeadLinkList.cpp
//  Structure
//
//  Created by Yusuf Mike  on 6/21/24.
//

#include "HeadLinkList.hpp"

bool InitHeadList(HeadLinkList &L){
    L = (LNode *) malloc(sizeof(LNode));
    if (L == NULL){
        return false;
    }
    L->next= NULL;
    return true;
}

bool InsertHeadList(HeadLinkList &L, int i,ElemType e){
    if (i<1){
        return false;
    }
    int j = 1;
    LNode *p = L;
    while (j<i && p!= NULL) {
        p = p->next;
        j++;
    }
    if(p== NULL){
        return false;
    }
    LNode *temp = (LNode *)malloc(sizeof(LNode));
    temp->next = p->next;
    p->next = temp;
    p->data = e;
    return true;
}

bool DeleteHeadList(HeadLinkList &L, int i,ElemType &e){
    if (i<1){
        return false;
    }
    int j = 1;
    LNode *p = L;
    // 要拿到要删除的节点
    while (j<i && p!= NULL) {
        p = p->next;
        j++;
    }
    if(p == NULL || p->next == NULL){
        return false;
    }
    LNode *q = p->next;
    e = q->data;
    p->next = q->next;
    free(q);
    return true;
}

bool InsertNextNode(LNode *p, ElemType e){
    if (p==NULL){
        return true;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if (s==NULL){
        return false;
    }
    s->next = p->next;
    p->next = s;
    s->data = e;
    return true;
}

bool InsertPriorNode(LNode *p, ElemType e){
    if (p==NULL){
        return true;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->next=p->next;
    s->data=p->data;
    p->data=e;
    p->next=s;
    return true;
}

LNode * GetHeadElem(HeadLinkList L, int i){
    if (i<0){
        return NULL;
    }
    if (i==1){
        return L;
    }
    int j = 1;
    LNode *p = L->next;
    while (i>j && p != NULL) {
        p = p->next;
        j++;
    }
    return p;
}

LNode * LocateHeadElem(HeadLinkList L, ElemType e){
    LNode *p=L;
    while (p!= NULL && p->data != e) {
        p = p->next;
    }
    return p;
}

int Length(HeadLinkList L){
    int len=0;
    LNode *p = L->next;
    while (p!=NULL) {
        p=p->next;
        len++;
    }
    return len;
}
