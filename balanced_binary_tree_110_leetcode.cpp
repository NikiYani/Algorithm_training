#include "balanced_binary_tree_110_leetcode.h"

TreeNode* balanced_binary_tree_110_leetcode::new_node(int data)
{
    TreeNode* Node = new TreeNode();
    Node->val = data;
    Node->left = nullptr;
    Node->right = nullptr;

    return (Node);
}

int balanced_binary_tree_110_leetcode::max(int a, int b)
{
    return (a >= b) ? a : b;
}

int balanced_binary_tree_110_leetcode::height(TreeNode* node)
{
    if (node == nullptr)
        return 0;

    return 1 + max(height(node->left),
                   height(node->right));
}

bool balanced_binary_tree_110_leetcode::is_balanced(TreeNode* root)
{
    if (root == nullptr)
        return 1;

    int lh = height(root->left);            // высота левого поддерева
    int rh = height(root->right);           // высота правого поддерева

    if (abs(lh - rh) <= 1                   // проверка на сбалансированность
            && is_balanced(root->left)      // разница в высоте меньше / равна единице
            && is_balanced(root->right))    // поддеревья сбалансированы
        return 1;

    return 0;
}

bool balanced_binary_tree_110_leetcode::balanced_binary_tree()
{
    TreeNode* root = new_node(1);
    root->left = new_node(2);
    root->right = new_node(3);
    root->left->left = new_node(4);
    root->left->right = new_node(5);
    root->left->left->left = new_node(8);

    return is_balanced(root);
}

balanced_binary_tree_110_leetcode::balanced_binary_tree_110_leetcode()
{

}
