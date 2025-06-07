
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

bool SequenceStackPush(SqStack &S, ElemType x);  // »Î’ª
bool SequenceStackPop(SqStack &S, ElemType &x);   // ≥ˆ’ª
bool GetSequenceStackTop(SqStack S, ElemType x); // ∂¡»°’ª∂•‘™Àÿ

bool bracketCheck(ElemType str[], int length);   // ¿®∫≈∆•≈‰

#endif /* SequenceStack_hpp */
