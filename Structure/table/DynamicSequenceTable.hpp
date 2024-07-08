//
//  DynamicSequenceTable.hpp
//  Structure
//
//  Created by Yusuf Mike  on 6/21/24.
//

#ifndef DynamicSequenceTable_hpp
#define DynamicSequenceTable_hpp

#include <iostream>
typedef int ElementType;
#define InitSize 10   // define maxinum length

typedef struct DynSqList{
    ElementType *data;
    int MaxSize;
    int length;
};

void InitList(DynSqList &L);
void IncreaseList(DynSqList &L, int len); //增加动态数组长度

bool InsertList(DynSqList &L, int i,ElementType e);
bool DeleteList(DynSqList &L, int i,ElementType &e);
ElementType GetElem(DynSqList L, int i);
int LocateElem(DynSqList L, ElementType e);
#endif /* DynamicSequenceTable_hpp */
