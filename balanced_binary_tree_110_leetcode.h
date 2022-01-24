#ifndef BALANCED_BINARY_TREE_110_LEETCODE_H
#define BALANCED_BINARY_TREE_110_LEETCODE_H

//    Given a binary tree, determine if it is height-balanced.

//    For this problem, a height-balanced binary tree is defined as:

//    a binary tree in which the left and right subtrees
//    of every node differ in height by no more than 1.

#include <cmath>
#include "same_tree_100_leetcode.h"

class balanced_binary_tree_110_leetcode
{
public:
    balanced_binary_tree_110_leetcode();

    static bool balanced_binary_tree();
    static bool is_balanced(TreeNode* root);
    static TreeNode* new_node(int data);
    static int max(int a, int b);
    static int height(TreeNode* node);
};

#endif // BALANCED_BINARY_TREE_110_LEETCODE_H
