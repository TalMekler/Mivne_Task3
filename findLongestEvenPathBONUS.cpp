//
// Created by Tal Mekler on 23/05/2022.
//
#include "BinaryTreeNode.h"
#include <queue>

int findLongestEvenPathBONUS(BinaryTreeNode *tree) {
    queue<BinaryTreeNode*> q, q2;
    int max = -1, cnt = -1;
    q.push(tree);
    cnt++;
    while (cnt >= 0) {
        if (q.back()->getLeft() != nullptr &&
            (atoi(q.back()->getLeft()->getValue()) % 2 == 0 &&
            atoi(q.back()->getLeft()->getValue()) != 0)) {
            q.push(q.back()->getLeft());
            q.back()->setValue("0");
            cnt++;
        }else if(q.back()->getRight() != nullptr &&
                 (atoi(q.back()->getRight()->getValue()) % 2 == 0 &&
                  atoi(q.back()->getRight()->getValue()) != 0)) {
            q.push(q.back()->getRight());
            q.back()->setValue("0");
            cnt++;
        }else {
            int s = q.size();
            for (int i = 0; i < s-1; ++i) {
                q2.push(q.front());
                q.pop();
            }
            q.pop();
            s = q2.size();
            for (int i = 0; i < s; ++i) {
                q.push(q2.front());
                q2.pop();
            }
            cnt--;
        }
        max = (max >= cnt) ? max : cnt;
    }

    return max;
}