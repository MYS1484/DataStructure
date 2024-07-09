//
//  StaticLinkList.cpp
//  Structure
//
//  Created by Yusuf Mike  on 7/1/24.
//

#include "StaticLinkList.hpp"

void InitStaticLinkList(SLinkList &L){
    L[0].next = -1;
    for (int i=1; i<MaxSize; i++) {
        L[i].next = -2;
    }
}
