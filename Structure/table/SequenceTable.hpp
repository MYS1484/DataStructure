//
//  SequenceTable.hpp
//  Structure
//
//  Created by Yusuf Mike  on 6/21/24.
//

#ifndef SequenceTable_hpp
#define SequenceTable_hpp

#include <iostream>
typedef int ElementType;

#define MaxSize 10   // define maxinum length
typedef struct SqList{
    ElementType data[MaxSize]; // 用静态的数组存放数据元素
    int length;        // 顺序表的当前长度
};               // 顺序表的类型定义

void InitList(SqList &L);
bool InsertList(SqList &L, int i,ElementType e);
bool DeleteList(SqList &L, int i,ElementType &e);
ElementType GetElem(SqList L, int i);
int LocateElem(SqList L, ElementType e);
#endif /* SequenceTable_hpp */
