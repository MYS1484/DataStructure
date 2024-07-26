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
#include "SequenceString.hpp"
//using namespace::std;

int main() {
    SString S;
    strcpy(S.ch, "ababaaababaa");
    int len = strlen(S.ch);
    int next[len+1];
    S.length = len;
    get_nextVal(S, next);
    // 循环输出整型数组中的每个元素
    for (int i = 1; i < len+1; i++)
    {
        printf("%d ", next[i]);
    }
    return 0;
}
