#include "maximum_depth_of_binary_tree_104_leetcode.h"

TreeNode* maximum_depth_of_binary_tree_104_leetcode::new_node(int data)
{
    TreeNode* Node = new TreeNode();
    Node->val = data;
    Node->left = nullptr;
    Node->right = nullptr;

    return (Node);
}

int maximum_depth_of_binary_tree_104_leetcode::max(int a, int b)
{
    return (a >= b) ? a : b;
}

int maximum_depth_of_binary_tree_104_leetcode::height(TreeNode* node)
{
    if(node == nullptr)
    {
        return 0;
    }

    return 1 + max(height(node->left),
                   height(node->right));
}

int maximum_depth_of_binary_tree_104_leetcode::maximum_depth()
{
    TreeNode* root = new_node(1);
    root->left = new_node(2);
    root->right = new_node(3);
    root->left->left = new_node(4);
    root->left->right = new_node(5);
    root->left->left->left = new_node(8);

    int max = height(root);

    return max;
}

maximum_depth_of_binary_tree_104_leetcode::maximum_depth_of_binary_tree_104_leetcode()
{

}
