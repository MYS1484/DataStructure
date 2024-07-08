//
//  main.cpp
//  Structure
//
//  Created by Yusuf Mike  on 6/18/24.
//

//#include <iostream>
//#include "SequenceTable.hpp"
//#include "DynamicSequenceTable.hpp"
//#include "HeadLinkList.hpp"
#include "SequenceQueue.hpp"
//using namespace::std;

int main() {
    SqQueue Q;
    ElemType x = 0;
    InitSequenceQueue(Q);
    EnSequenceQueue(Q, 1);
    EnSequenceQueue(Q, 2);
    EnSequenceQueue(Q, 3);
    EnSequenceQueue(Q, 4);
    while (DeSequenceQueue(Q, x)) {
        printf("deque data: %d \n", x);
    }
    return 0;
}
