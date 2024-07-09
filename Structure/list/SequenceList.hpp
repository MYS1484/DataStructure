//
//  SequenceList.hpp
//  Structure
//
//  Created by Yusuf Mike  on 6/21/24.
//

#ifndef SequenceList_hpp
#define SequenceList_hpp

#include <iostream>
typedef int ElemType;

#define MaxSize 10   // define maxinum length
typedef struct SqList{
    ElemType data[MaxSize]; // 用静态的数组存放数据元素
    int length;        // 顺序表的当前长度
};               // 顺序表的类型定义

void InitList(SqList &L);
bool InsertList(SqList &L, int i,ElemType e);
bool DeleteList(SqList &L, int i,ElemType &e);
ElemType GetElem(SqList L, int i);
int LocateElem(SqList L, ElemType e);
#endif /* SequenceList_hpp */
