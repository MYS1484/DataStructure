//
//  LinkStack.hpp
//  Structure
//
//  Created by Yusuf Mike  on 7/2/24.
//

#ifndef LinkStack_hpp
#define LinkStack_hpp

#include <iostream>
typedef int ElemType;
typedef struct Node{
    ElemType data;
    Node *next;
}Node, *LiStack;

bool InitLinkStack(LiStack &S);
bool PushLinkStack(LiStack &S, ElemType x);
bool PopLinkStack(LiStack &S, ElemType &x);

#endif /* LinkStack_hpp */
