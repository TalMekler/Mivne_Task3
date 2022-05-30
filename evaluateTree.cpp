/*
 * Tal Mekler, 318811122
 * Moshe Azachi, 209087337
 */

#include "BinaryTreeNode.h"

double evaluateTree(BinaryTreeNode *root) {
    if (root == nullptr)
        return 0;

    switch (*(root->getValue())) { // Check if root value is a sign (+, -, *, /)
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