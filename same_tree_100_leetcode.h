#ifndef SAME_TREE_100_H
#define SAME_TREE_100_H

//    Given the roots of two binary trees p and q, write
//    a function to check if they are the same or not.

//    Two binary trees are considered the same if they are
//    structurally identical, and the nodes have the same value.

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class same_tree_100
{
public:
    same_tree_100();

    static bool is_same_tree(TreeNode* p, TreeNode* q);
    static bool tree_comparison();
};

#endif // SAME_TREE_100_H
