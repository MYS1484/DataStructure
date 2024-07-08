//
//  ShareStack.hpp
//  Structure
//
//  Created by Yusuf Mike  on 7/2/24.
//

#ifndef ShareStack_hpp
#define ShareStack_hpp

#include <iostream>
#define MaxSize 10
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize];
    int top0;
    int top1;
}ShStack;

void InitShareStack(ShStack &S);

#endif /* ShareStack_hpp */
