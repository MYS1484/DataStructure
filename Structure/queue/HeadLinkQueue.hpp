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

void initLinkQueue(HeadLinkQueue &Q);
bool isEmptyLinkQueue(HeadLinkQueue Q);

#endif /* HeadLinkQueue_hpp */
