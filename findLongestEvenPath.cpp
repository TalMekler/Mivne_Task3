/*
 * Tal Mekler, 318811122
 * Moshe Azachi, 209087337
 */

#include "BinaryTreeNode.h"

int findLongestEvenPath(BinaryTreeNode *tree) {
    int valRight;
    int valLeft;
    int maxVal;

    if (tree == nullptr || atoi(tree->getValue()) % 2 == 1)
        return -1;

    valLeft = findLongestEvenPath(tree->getLeft());
    valRight = findLongestEvenPath(tree->getRight());
    maxVal = (valLeft > valRight) ? valLeft : valRight; // Check longest path between right and left

    return maxVal + 1;
}
