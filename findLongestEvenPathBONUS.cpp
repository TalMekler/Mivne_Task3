//
// Created by Tal Mekler on 23/05/2022.
//
#include "BinaryTreeNode.h"

int findLongestEvenPathBONUS(BinaryTreeNode *tree) {
    BinaryTreeNode *bnArr1[30], *bnArr2[30];
    int max = -1, cnt = -1, size1 = 0, size2 = 0;
    bnArr1[size1] = tree;
    size1++;
    cnt++;
    while (cnt >= 0) {
        if (bnArr1[size1 - 1]->getLeft() != nullptr && (atoi(bnArr1[size1 - 1]->getLeft()->getValue()) % 2 == 0 &&
                                                        atoi(bnArr1[size1 - 1]->getLeft()->getValue()) != 0)) {
            bnArr1[size1] = bnArr1[size1 - 1]->getLeft();
            bnArr1[size1]->setValue("0");
            size1++;
            cnt++;
        } else if (bnArr1[size1 - 1]->getRight() != nullptr &&
                   (atoi(bnArr1[size1 - 1]->getRight()->getValue()) % 2 == 0 &&
                    atoi(bnArr1[size1 - 1]->getRight()->getValue()) != 0)) {
            bnArr1[size1] = bnArr1[size1 - 1]->getRight();
            bnArr1[size1]->setValue("0");
            size1++;
            cnt++;
        } else {
            for (int i = 0; i < size1 - 1; ++i) {
                bnArr2[size2] = bnArr1[i];
                size2++;
            }
            for (int i = 0; i < size2; ++i) {
                bnArr1[i] = bnArr2[i];
            }
            size1 = size2;
            size2 = 0;
            cnt--;
        }
        max = (max >= cnt) ? max : cnt;
    }

    return max;
}