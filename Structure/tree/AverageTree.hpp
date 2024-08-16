//
//  AverageTree.hpp
//  Structure
//
//  Created by Yusuf Mike  on 8/16/24.
//

#ifndef AverageTree_hpp
#define AverageTree_hpp

#include <iostream>

typedef struct AVLNode{
    int key;                //数据域
    int balance;            //平衡因子
    struct AVLNode *lchild,*rchild;
}AVLNode,*AVLTree;

#endif /* AverageTree_hpp */
