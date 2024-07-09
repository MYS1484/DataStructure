//
//  LinkQueue.hpp
//  Structure
//
//  Created by Yusuf Mike  on 7/9/24.
//

#ifndef LinkQueue_hpp
#define LinkQueue_hpp

#include <istream>
#include "HeadLinkList.hpp"

typedef struct {
   LNode *front, *rear;
}LinkQueue;

void InitLinkQueue(LinkQueue &Q);
bool IsEmptyLinkQueue(LinkQueue Q);

// 入队
bool EnLinkQueue(LinkQueue &Q, ElemType e);
// 出队
bool DeLinkQueue(LinkQueue &Q, ElemType &e);

#endif /* LinkQueue_hpp */
