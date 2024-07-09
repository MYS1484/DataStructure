//
//  SequenceQueue.hpp
//  Structure
//
//  Created by Yusuf Mike  on 7/2/24.
//

#ifndef SequenceQueue_hpp
#define SequenceQueue_hpp

#include <iostream>
#define MaxSize 10

typedef int ElemType;
typedef struct {
    ElemType data[MaxSize];
    int front, rear;
} SqQueue;

void InitSequenceQueue(SqQueue &Q);
bool IsEmptySequenceQueue(SqQueue Q);
bool IsFullSequenceQueue(SqQueue Q);
// 入队
bool EnSequenceQueue(SqQueue &Q, ElemType e);
// 出队
bool DeSequenceQueue(SqQueue &Q, ElemType &e);
bool GetSequenceQueueHead(SqQueue Q, ElemType &x);

#endif /* SequenceQueue_hpp */
