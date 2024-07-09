//
//  DoubleLinkList.cpp
//  Structure
//
//  Created by Yusuf Mike  on 6/26/24.
//

#include "DoubleLinkList.hpp"


bool InitDLinkList(DLinkList &L){
    L = (DNode *) malloc(sizeof(DNode));
    L->prior=NULL;
    L->next=NULL;
    return true;
}

// 在p结点后插入s结点
bool InsertNextDNode(DNode *p, DNode *s){
    if(p==NULL || s==NULL){
        return false;
    }
    s->next=p->next;
    if (p->next!= NULL){
        p->next->prior = s;
    }
    s->prior = p;
    p->next = s;
    return true;
}

bool DestoryList(DLinkList &L){
    while (L->next!= NULL) {
        DeleteNextDNode(L);
    }
    free(L);
    return true;
}

// 删除p结点的后继节点
bool DeleteNextDNode(DNode *p){
    if (p==NULL) return false;
    DNode *q = p->next;
    if (q==NULL) return false;
    p->next=q->next;
    if (q->next!= NULL) // q不是最后一个结点
        q->next->prior = p;
    free(q);
    return true;
}

bool InitCycleDoubleLinkList(DLinkList &L){
    L = (DNode *)malloc(sizeof(DNode));
    L->prior=L;
    L->next=L;
    return true;
}

bool IsEmptyCycleDoubleLinkList(DLinkList L){
    if (L->next == L){
        return true;
    }else{
        return false;
    }
}

bool IsTailCycleDoubleLinkList(DLinkList L, DNode *p){
    if (p->next==L){
        return true;
    }else{
        return false;
    }
}
