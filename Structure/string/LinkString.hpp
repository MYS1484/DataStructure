//
//  LinkString.hpp
//  Structure
//
//  Created by Yusuf Mike  on 7/9/24.
//

#ifndef LinkString_hpp
#define LinkString_hpp
#define MAXLEN 255

#include <iostream>


// 废弃,因为这种方式空间利用率太低
//typedef struct StringNode{
//    char ch;
//    struct StringNode *next;
//}StringNode, *String;

typedef struct StringNode{
    char ch[4];
    struct StringNode *next;
}StringNode, *String;

#endif /* LinkString_hpp */
