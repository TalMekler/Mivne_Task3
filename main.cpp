/*
 * Tal Mekler, 318811122
 * Moshe Azachi, 209087337
 */

#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

int findLongestEvenPath(BinaryTreeNode *tree);
double evaluateTree(BinaryTreeNode* root);
int findLongestEvenPathBONUS(BinaryTreeNode *tree);

int main() {
    cout << "### Ex.1 ###" << endl;
    BinaryTreeNode *root = new BinaryTreeNode("10");
    root->setLeft(new BinaryTreeNode("6"));
    root->getLeft()->setLeft(new BinaryTreeNode("4"));
    root->getLeft()->setRight(new BinaryTreeNode("8"));
    root->setRight(new BinaryTreeNode("18"));
    root->getRight()->setLeft(new BinaryTreeNode("15"));
    root->getRight()->setRight(new BinaryTreeNode("21"));
    root->getRight()->getRight()->setRight(new BinaryTreeNode("22"));

    cout << "Longest even path: " << findLongestEvenPath(root) << endl;
    cout << "Longest even path (Bonus): "<<findLongestEvenPathBONUS(root)<<endl;

    cout << "\n### Ex.2 ###" << endl;
    BinaryTreeNode* root2 = new BinaryTreeNode("+");
    root2->setLeft(new BinaryTreeNode("*"));
    root2->setRight(new BinaryTreeNode("/"));
    root2->getLeft()->setLeft(new BinaryTreeNode("-"));
    root2->getLeft()->setRight(new BinaryTreeNode("5"));
    root2->getRight()->setLeft(new BinaryTreeNode("21"));
    root2->getRight()->setRight(new BinaryTreeNode("7"));
    root2->getLeft()->getLeft()->setLeft(new BinaryTreeNode("10"));
    root2->getLeft()->getLeft()->setRight(new BinaryTreeNode("5"));
    cout << "evaluateTree Res: " << evaluateTree(root2) << endl;

    cout << "\ndone!" << endl;

    return 0;
}
