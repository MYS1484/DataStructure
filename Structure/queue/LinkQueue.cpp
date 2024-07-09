//
//  LinkQueue.cpp
//  Structure
//
//  Created by Yusuf Mike  on 7/9/24.
//

#include "LinkQueue.hpp"


void InitLinkQueue(LinkQueue &Q){
    Q.front = Q.rear = NULL;
}

bool IsEmptyLinkQueue(LinkQueue Q){
    if (Q.front == NULL) {
        return true;
    }else{
        return false;
    }
}

// 入队
bool EnLinkQueue(LinkQueue &Q, ElemType e){
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = NULL;
    if (IsEmptyLinkQueue(Q)){
        Q.front = Q.rear = s;
    }else{
        Q.rear->next = s;
        Q.rear = s;
    }
    return true;
}

// 出队
bool DeLinkQueue(LinkQueue &Q, ElemType &e){
    if(IsEmptyLinkQueue(Q)){
        return false;
    }
    LNode *p = Q.front;
    e = p->data;
    if (Q.front==Q.rear){
        Q.front=Q.rear=NULL;
    }else{
        Q.front = p->next;
    }
    free(p);
    return true;
}
