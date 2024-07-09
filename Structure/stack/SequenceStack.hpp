//
//  SequenceStack.hpp
//  Structure
//
//  Created by Yusuf Mike  on 7/2/24.
//

#ifndef SequenceStack_hpp
#define SequenceStack_hpp

#include <iostream>
#define MaxSize 30
typedef char ElemType;

typedef struct {
    ElemType data[MaxSize];
    int top;
}SqStack;

void InitSequenceStack(SqStack &S);
bool IsEmptySequenceStack(SqStack S);

bool SequenceStackPush(SqStack &S, ElemType x);  // 入栈
bool SequenceStackPop(SqStack &S, ElemType &x);   // 出栈
bool GetSequenceStackTop(SqStack S, ElemType x); // 读取栈顶元素

bool bracketCheck(ElemType str[], int length);   // 括号匹配

#endif /* SequenceStack_hpp */
