//
// Created by Tal Mekler on 15/05/2022.
//

#include "BinaryTreeNode.h"

int findLongestEvenPath(BinaryTreeNode* tree) {
    int valRight;
    int valLeft;
    if(tree->getRight() == nullptr)
        valRight = -1;
    else if (atoi(tree->getRight()->getValue()) % 2 == 1)
        valRight = -1;
    else
        valRight = findLongestEvenPath(tree->getRight());

    if(tree->getLeft() == nullptr)
        valLeft = -1;
    else if (atoi(tree->getLeft()->getValue()) % 2 == 1)
        valLeft = -1;
    else
        valLeft = findLongestEvenPath(tree->getLeft());

    int res = (valRight > valLeft) ? valRight : valLeft;
    return 1 + res;

}
