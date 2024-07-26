//
//  BinaryTree.cpp
//  Structure
//
//  Created by Yusuf Mike  on 7/22/24.
//

#include "BinaryTree.hpp"

// 创建一个新的结点
BiTNode* createNode(ElemType data) {
    BiTNode* newNode = (BiTNode*)malloc(sizeof(BiTNode));
    if (!newNode) {
        printf("内存分配失败\n");
        return NULL;
    }
    newNode->data = data;
    newNode->lchild = newNode->rchild = NULL;
    return newNode;
}

// 插入一个结点到二叉搜索树中
BiTree insertNode(BiTree root, ElemType data) {
    if (root == NULL) {
        root = createNode(data);
    } else if (data < root->data) {
        root->lchild = insertNode(root->lchild, data);
    } else if (data > root->data) {
        root->rchild = insertNode(root->rchild, data);
    }
    return root;
}

// 查找一个结点
BiTNode* searchNode(BiTree root, ElemType key) {
    if (root == NULL || root->data == key) {
        return root;
    }
    if (key < root->data) {
        return searchNode(root->lchild, key);
    } else {
        return searchNode(root->rchild, key);
    }
}

// 删除一个结点
BiTree deleteNode(BiTree root, ElemType key) {
    if (root == NULL) return NULL;

    if (key < root->data) {
        root->lchild = deleteNode(root->lchild, key);
    } else if (key > root->data) {
        root->rchild = deleteNode(root->rchild, key);
    } else {
        // 结点拥有两个孩子
        if (root->lchild && root->rchild) {
            BiTNode* temp = root->rchild;
            while (temp->lchild != NULL) temp = temp->lchild;
            root->data = temp->data;
            root->rchild = deleteNode(root->rchild, temp->data);
        } else {
            BiTNode* temp = root;
            if (root->lchild == NULL) root = root->rchild;
            else if (root->rchild == NULL) root = root->lchild;
            free(temp);
        }
    }
    return root;
}

// 前序遍历
void preOrderTraversal(BiTree root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preOrderTraversal(root->lchild);
    preOrderTraversal(root->rchild);
}

// 中序遍历
void inOrderTraversal(BiTree root) {
    if (root == NULL) return;
    inOrderTraversal(root->lchild);
    printf("%d ", root->data);
    inOrderTraversal(root->rchild);
}

// 后序遍历
void postOrderTraversal(BiTree root) {
    if (root == NULL) return;
    postOrderTraversal(root->lchild);
    postOrderTraversal(root->rchild);
    printf("%d ", root->data);
}

int TreeDepth(BiTree T){
    if (T==NULL){
        return 0;
    }else{
        int l = TreeDepth(T->lchild);
        int r = TreeDepth(T->rchild);
        return l>r ? l+1: r+1;
    }
}

void LevelOrder(BiTree T){
    LinkQueue Q;
    
    
}
