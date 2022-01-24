#ifndef MAXIMUM_DEPTH_OF_BINARY_TREE_104_LEETCODE_H
#define MAXIMUM_DEPTH_OF_BINARY_TREE_104_LEETCODE_H

//    Given the root of a binary tree, return its maximum depth.

//    A binary tree's maximum depth is
//    the number of nodes along the longest path from the root node down to the farthest leaf node.

#include "same_tree_100_leetcode.h"

class maximum_depth_of_binary_tree_104_leetcode
{
public:
    maximum_depth_of_binary_tree_104_leetcode();

    static int maximum_depth();
    static TreeNode* new_node(int data);
    static int height(TreeNode* node);
    static int max(int a, int b);
};

#endif // MAXIMUM_DEPTH_OF_BINARY_TREE_104_LEETCODE_H
