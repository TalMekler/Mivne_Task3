/*
 * Tal Mekler, 318811122
 * Moshe Azachi, 209087337
 */

#ifndef TASK3_BINARYTREENODE_H
#define TASK3_BINARYTREENODE_H

#include <string.h>
#include <iostream>

using namespace std;


class BinaryTreeNode {
    char *_value;
    BinaryTreeNode *_left;
    BinaryTreeNode *_right;

public:
    BinaryTreeNode();
    BinaryTreeNode(const char *value);
    BinaryTreeNode(const char *value, BinaryTreeNode *left, BinaryTreeNode *right);

    // Setters & Getters
    char *getValue() const;
    void setValue(const char *value);
    BinaryTreeNode *getLeft() const;
    void setLeft(BinaryTreeNode *left);
    BinaryTreeNode *getRight() const;
    void setRight(BinaryTreeNode *right);
};


#endif //TASK3_BINARYTREENODE_H
