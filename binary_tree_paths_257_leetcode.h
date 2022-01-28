#ifndef BINARY_TREE_PATHS_257_LEETCODE_H
#define BINARY_TREE_PATHS_257_LEETCODE_H

//    Given the root of a binary tree,
//    return all root-to-leaf paths in any order.

//    A leaf is a node with no children.

#include "same_tree_100_leetcode.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class binary_tree_paths_257_leetcode
{
public:
    binary_tree_paths_257_leetcode();

    static void binary_tree_paths();
    static void binary_tree(TreeNode *node, string str, vector<string> &result);
    static TreeNode* new_node(int data);
};

#endif // BINARY_TREE_PATHS_257_LEETCODE_H
