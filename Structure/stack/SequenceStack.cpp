//
//  SequenceStack.cpp
//  Structure
//
//  Created by Yusuf Mike  on 7/2/24.
//

#include "SequenceStack.hpp"

void InitSequenceStack(SqStack &S){
    S.top=-1;
}

bool IsEmptySequenceStack(SqStack S){
    if(S.top == -1){    // 栈空
        return true;
    }else{
        return false;  // 栈非空
    }
}

bool SequenceStackPush(SqStack &S, ElemType x){
    if (S.top > MaxSize - 2) return false;
    S.data[++S.top] = x;
    return true;
}

bool SequenceStackPop(SqStack &S, ElemType &x){
    if (S.top == -1) return false;
    x = S.data[S.top];
    S.top--;
    return true;
}

bool GetSequenceStackTop(SqStack S, ElemType x){
    if(S.top == -1) return false;
    x = S.data[S.top];
    return true;
}

bool bracketCheck(ElemType str[], int length){
    SqStack S;
    InitSequenceStack(S);
    for (int i=0; i<length; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{'){
            SequenceStackPush(S, str[i]);
        }else{
            if(IsEmptySequenceStack(S)){
                return false;
            }
            ElemType topElement;
            SequenceStackPop(S, topElement);
            printf("栈顶元素:%c\n", topElement);
            if (str[i] == ')' && topElement != '('){
                return false;
            }
            if (str[i] == ']' && topElement != '['){
                return false;
            }
            if (str[i] == '}' && topElement != '{'){
                return false;
            }
        }
    }
    return IsEmptySequenceStack(S);
}
