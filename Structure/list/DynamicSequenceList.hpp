//
//  DynamicSequenceList.hpp
//  Structure
//
//  Created by Yusuf Mike  on 6/21/24.
//

#ifndef DynamicSequenceList_hpp
#define DynamicSequenceList_hpp

#include <iostream>
typedef int ElemType;
#define InitSize 10   // define maxinum length

typedef struct DynSqList{
    ElemType *data;
    int MaxSize;
    int length;
};

void InitList(DynSqList &L);
void IncreaseList(DynSqList &L, int len); //增加动态数组长度

bool InsertList(DynSqList &L, int i,ElemType e);
bool DeleteList(DynSqList &L, int i,ElemType &e);
ElemType GetElem(DynSqList L, int i);
int LocateElem(DynSqList L, ElemType e);
#endif /* DynamicSequenceList_hpp */
