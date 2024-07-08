//
//  LinkStack.cpp
//  Structure
//
//  Created by Yusuf Mike  on 7/2/24.
//

#include "LinkStack.hpp"

bool InitLinkStack(LiStack &S){
    S = NULL;
    return true;
}

bool PushLinkStack(LiStack &S, ElemType x){
    Node *s = (Node *)malloc(sizeof(Node));
    s->data = x;
    s->next = S;
    S = s;
    return true;
}

bool PopLinkStack(LiStack &S, ElemType &x){
    if(S==NULL) return false;
    x = S->data;
    S = S->next;
    return true;
}
