//
//  HeadLinkQueue.cpp
//  Structure
//
//  Created by Yusuf Mike  on 7/8/24.
//

#include "LinkQueue.hpp"

void initHeadLinkQueue(HeadLinkQueue &Q){
    Q.front=Q.rear=(LNode *)malloc(sizeof(LNode));
    Q.front->next = NULL;
}


bool isEmptyHeadLinkQueue(HeadLinkQueue Q){
    if(Q.front == Q.rear){
        return true;
    }else {
        return true;
    }
}
