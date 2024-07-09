//
//  HeadLinkQueue.hpp
//  Structure
//
//  Created by Yusuf Mike  on 7/8/24.
//

#ifndef HeadLinkQueue_hpp
#define HeadLinkQueue_hpp

#include <iostream>
#include "HeadLinkList.hpp"

typedef struct {
    LNode *front,*rear;
}HeadLinkQueue;

void InitHeadLinkQueue(HeadLinkQueue &Q);
bool IsEmptyHeadLinkQueue(HeadLinkQueue Q);

// 入队
bool EnHeadLinkQueue(HeadLinkQueue &Q, ElemType e);
// 出队
bool DeHeadLinkQueue(HeadLinkQueue &Q, ElemType &e);

#endif /* HeadLinkQueue_hpp */
