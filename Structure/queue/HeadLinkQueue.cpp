//
//  HeadLinkQueue.cpp
//  Structure
//
//  Created by Yusuf Mike  on 7/8/24.
//

#include "HeadLinkQueue.hpp"

void InitHeadLinkQueue(HeadLinkQueue &Q){
    Q.front=Q.rear=(LNode *)malloc(sizeof(LNode));
    Q.front->next = NULL;
}


bool IsEmptyHeadLinkQueue(HeadLinkQueue Q){
    if (Q.front == Q.rear){
        return true;
    }else {
        return false;
    }
}

// 入队
bool EnHeadLinkQueue(HeadLinkQueue &Q, ElemType e){
    // 不覆盖头节点的原因:因为本身就是带头节点的初始化方式，防止出队的时候把头节点搞没了
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->next = NULL;
    s->data = e;
    Q.rear->next = s;
    // 因为Q.rear已经往后移动一位，则要指向s
    Q.rear = s;
    return true;
}

// 出队
bool DeHeadLinkQueue(HeadLinkQueue &Q, ElemType &e){
    if (IsEmptyHeadLinkQueue(Q)){
        return false;
    }
    LNode *p = Q.front->next;
    e = p->data;
    // 不用Q.front = p,原因是保留其头节点
    Q.front->next = p->next;
    if (Q.rear == p){
        Q.front = Q.rear;
    }
    free(p);
    return true;
}
