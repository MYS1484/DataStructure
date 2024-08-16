//
//  main.cpp
//  Structure
//
//  Created by Yusuf Mike  on 6/18/24.
//

//#include <iostream>
//#include "SequenceList.hpp"
//#include "DynamicSequenceList.hpp"
//#include "HeadLinkList.hpp"
#include "Search.hpp"
using namespace::std;

int main() {
    DynSqList L;
    InitList(L);
    InsertList(L, 1, 1);
    InsertList(L, 2, 2);
    InsertList(L, 3, 3);
    InsertList(L, 4, 4);
    int res = Binary_Search(L, 3);
    printf("result:%d", res);
    return 0;
}
