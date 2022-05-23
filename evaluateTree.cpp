//
// Created by Tal Mekler on 15/05/2022.
//

#include "BinaryTreeNode.h"

double evaluateTree(BinaryTreeNode *root) {
    if (root == nullptr)
        return 0;

    char *sign = root->getValue();
    switch (*sign) {
        case '+':
            return evaluateTree(root->getLeft()) + evaluateTree(root->getRight());
        case '-':
            return evaluateTree(root->getLeft()) - evaluateTree(root->getRight());
        case '*':
            return evaluateTree(root->getLeft()) * evaluateTree(root->getRight());
        case '/':
            return evaluateTree(root->getLeft()) / evaluateTree(root->getRight());
        default:
            return atoi(root->getValue());
    }


}