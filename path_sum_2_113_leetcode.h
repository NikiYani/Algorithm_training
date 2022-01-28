#ifndef PATH_SUM_2_113_LEETCODE_H
#define PATH_SUM_2_113_LEETCODE_H

//    Given the root of a binary tree and an integer targetSum, return
//    all root-to-leaf paths where the sum of the node values in the path equals targetSum.
//    Each path should be returned as a list of the node values, not node references.

//    A root-to-leaf path is a path starting from the root and ending at any leaf node.
//    A leaf is a node with no children.

#include "same_tree_100_leetcode.h"
#include <iostream>
#include <vector>

using namespace std;

class path_sum_2_113_leetcode
{
public:
    path_sum_2_113_leetcode();

    static vector<vector<int>> sum(TreeNode* root, int targetSum);
    static void path_sum();
    static TreeNode* new_node(int data);
};

#endif // PATH_SUM_2_113_LEETCODE_H
