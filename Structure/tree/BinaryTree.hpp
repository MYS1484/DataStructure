//
//  BinaryTree.hpp
//  Structure
//
//  Created by Yusuf Mike  on 7/22/24.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <iostream>
typedef int ElemType;

// 二叉树结点(链式存储)
typedef struct BiTNode{
    ElemType data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

// 链式队列结点
typedef struct LinkNode{
    BiTNode *data;
    struct LinkNode *next;
}LinkNode;

typedef struct {
    LinkNode *front,*rear;// 对头队尾
}LinkQueue;

// 初始化及遍历基本操作
BiTNode* createNode(ElemType data);
BiTree insertNode(BiTree root, ElemType data);
BiTNode* searchNode(BiTree root, ElemType key);
BiTree deleteNode(BiTree root, ElemType key);
void preOrderTraversal(BiTree root);
void inOrderTraversal(BiTree root);
void postOrderTraversal(BiTree root);

// 探求
int TreeDepth(BiTree T);
//void InitQueue(LinkQueue &Q);

void LevelOrder(BiTree T);

// 自旋
BiTree rightRotate(BiTree T);
BiTree leftRotate(BiTree T);
#endif /* BinaryTree_hpp */
