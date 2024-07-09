//
//  DynamicSequenceList.cpp
//  Structure
//
//  Created by Yusuf Mike  on 6/21/24.
//

#include "DynamicSequenceList.hpp"


void InitList(DynSqList &L) {
    L.data = (ElemType *)malloc(InitSize * sizeof(ElemType));
    L.MaxSize = InitSize;
    L.length = 0;       //顺序表初始长度为0
}

void IncreaseList(DynSqList &L, int len){
//    int *p = L.data;
//    L.data = (ElemType *)malloc((L.MaxSize + len)*sizeof(ElemType));
    L.data = (ElemType *)realloc(L.data, (L.MaxSize + len)*sizeof(ElemType));
//    for (int i=0; i<L.length; i++) {
//        L.data[i] = p[i];
//    }
    L.MaxSize = L.MaxSize + len;
//    free(p);
}

bool InsertList(DynSqList &L, int i, ElemType e){
    if(i<1 || i>L.length+1){
        return false;
    }
    if(L.length >= L.MaxSize){
        IncreaseList(L, 1);
    }
    L.length++;
    for(int j=i;j<L.length;j++){
        L.data[j]=L.data[j-1];
    }
    L.data[i-1] = e;
    return true;
}

bool DeleteList(DynSqList &L, int i,ElemType &e){
    if(i<1 || i>L.length){
        return false;
    }
    e = L.data[i-1];
    for(int j=i;j<L.length;j++){
        L.data[j-1] = L.data[j];
    }
    L.length--;
    return true;
}

ElemType GetElem(DynSqList L, int i){
    if(i<1 || i>L.length){
        return NULL;
    }
    return L.data[i-1];
}

int LocateElem(DynSqList L, ElemType e){
    for (int i=0; i<L.length; i++) {
        if(L.data[i] == e){
            return i;
        }
    }
    return 0;
}
