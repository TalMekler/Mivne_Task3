//
// Created by Tal Mekler on 15/05/2022.
//

#include "BinaryTreeNode.h"

double evaluateTree(BinaryTreeNode *root) {
    if (root == nullptr)
        return 0;

    if (strcmp(root->getValue(), "+") == 0)
        return evaluateTree(root->getLeft()) + evaluateTree(root->getRight());
    if (strcmp(root->getValue(), "-") == 0)
        return evaluateTree(root->getLeft()) - evaluateTree(root->getRight());
    if (strcmp(root->getValue(), "*") == 0)
        return evaluateTree(root->getLeft()) * evaluateTree(root->getRight());
    if (strcmp(root->getValue(), "/") == 0)
        return evaluateTree(root->getLeft()) / evaluateTree(root->getRight());

    return atoi(root->getValue());
}