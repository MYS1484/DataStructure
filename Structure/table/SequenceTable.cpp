//
//  SequenceTable.cpp
//  Structure
//
//  Created by Yusuf Mike  on 6/21/24.
//

#include "SequenceTable.hpp"

void InitList(SqList &L) {
    for (int i = 0; i < MaxSize; i++) {
        L.data[i] = 0;
    }
    L.length = 0;       //顺序表初始长度为0
}

bool InsertList(SqList &L, int i, ElementType e){
    if(i<1 || i>L.length + 1){
        return false;
    }
    if(L.length >= MaxSize){
        return false;
    }
    for(int j=i; j<L.length;i++){
        L.data[j] =L.data[j-1];
    }
    L.data[i-1] = e;
    L.length++;
    return true;
}

bool DeleteList(SqList &L, int i, ElementType &e){
    if(i<1 || i>L.length){
        return false;
    }
    e = L.data[i-1];
    for (int j = i;j<L.length;j++){
        L.data[j-1]=L.data[j];
    }
    L.length--;
    return true;
}

ElementType GetElem(SqList L, int i){
    if(i<1 || i>L.length){
        return NULL;
    }
    return L.data[i-1];
}

int LocateElem(SqList L, ElementType e){
    for (int i=0; i<L.length; i++) {
        if(L.data[i] == e){
            return i;
        }
    }
    return 0;
}
