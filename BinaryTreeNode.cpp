//
// Created by Tal Mekler on 15/05/2022.
//

#include "BinaryTreeNode.h"

BinaryTreeNode::BinaryTreeNode() : _value(nullptr), _left(nullptr), _right(nullptr) {}

BinaryTreeNode::BinaryTreeNode(const char *value) : _left(nullptr), _right(nullptr) {
    _value = strdup(value);
}

BinaryTreeNode::BinaryTreeNode(const char *value, BinaryTreeNode *left, BinaryTreeNode *right) : _left(left),
                                                                                                 _right(right) {
    _value = strdup(value);
}
// Setters & Getters

char *BinaryTreeNode::getValue() const {
    return _value;
}

void BinaryTreeNode::setValue(const char *value) {
    try {
        delete[] _value;
    }
    catch (...) {
        cout << "setValue, ERROR: can't delete _value" << endl;
    }
    _value = strdup(value);
}

BinaryTreeNode *BinaryTreeNode::getLeft() const {
    return _left;
}

void BinaryTreeNode::setLeft(BinaryTreeNode *left) {
    _left = left;
}

BinaryTreeNode *BinaryTreeNode::getRight() const {
    return _right;
}

void BinaryTreeNode::setRight(BinaryTreeNode *right) {
    _right = right;
}



