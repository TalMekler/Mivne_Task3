//
// Created by Tal Mekler on 23/05/2022.
//
#include "BinaryTreeNode.h"
#include <queue>

int findLongestEvenPathBONUS(BinaryTreeNode *tree) {
    queue<BinaryTreeNode*> q, q2;
    int max = -1;
    q.push(tree); // Push root
    while (q.size() > 0) { // While root in q
        if (q.back()->getLeft() != nullptr &&
            (atoi(q.back()->getLeft()->getValue()) % 2 == 0 &&
            atoi(q.back()->getLeft()->getValue()) != 0)) { // If the left child exist and his value is even != 0
            q.push(q.back()->getLeft());
            q.back()->setValue("0");

        }else if(q.back()->getRight() != nullptr &&
                 (atoi(q.back()->getRight()->getValue()) % 2 == 0 &&
                  atoi(q.back()->getRight()->getValue()) != 0)) { // If the right child exist and his value is even != 0
            q.push(q.back()->getRight());
            q.back()->setValue("0");
        }else { // If the left and right children haven't even value (or = nullptr)
            int s = q.size();

            for (int i = 0; i < s-1; ++i) { // Push to q2 the nodes from q except the last node
                q2.push(q.front());
                q.pop();
            }

            q.pop();
            s = q2.size();
            for (int i = 0; i < s; ++i) { // Push to q the nodes from q2
                q.push(q2.front());
                q2.pop();
            }
        }

        int size = q.size() - 1; // Path length
        if (max < size) // Change the max path length
            max = size;
    }

    return max;
}