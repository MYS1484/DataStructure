//
//  SequenceQueue.cpp
//  Structure
//
//  Created by Yusuf Mike  on 7/2/24.
//

#include "SequenceQueue.hpp"

void InitSequenceQueue(SqQueue &Q){
    Q.front = Q.rear = 0;
}

bool isEmptySequenceQueue(SqQueue Q){
    if(Q.front == Q.rear){
        return true;
    }else{
        return false;
    }
}

bool isFullSequenceQueue(SqQueue Q){
    if ((Q.rear + 1)%MaxSize == Q.front) return true;
    else return false;
}

bool EnSequenceQueue(SqQueue &Q, ElemType e){
    if (isFullSequenceQueue(Q)) return false;
    Q.data[Q.rear] = e;
    Q.rear = (Q.rear + 1)%MaxSize;
    return true;
}

bool DeSequenceQueue(SqQueue &Q, ElemType &e){
    if (isEmptySequenceQueue(Q)) return false;
    e = Q.data[Q.front];
    Q.front = (Q.front + 1)%MaxSize;
    return true;
}

bool GetSequenceQueueHead(SqQueue Q, ElemType &x){
    if (isEmptySequenceQueue(Q)) return false;
    x = Q.data[Q.front];
    return true;
}
