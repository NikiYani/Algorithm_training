#include "binary_tree_paths_257_leetcode.h"

TreeNode* binary_tree_paths_257_leetcode::new_node(int data)
{
    TreeNode* Node = new TreeNode();
    Node->val = data;
    Node->left = nullptr;
    Node->right = nullptr;

    return (Node);
}


void binary_tree_paths_257_leetcode::binary_tree_paths()
{
    TreeNode* root = new_node(5);

    root->left = new_node(4);
    root->right = new_node(8);

    root->left->left = new_node(11);
    root->right->left = new_node(13);
    root->right->right = new_node(4);

    root->left->left->left = new_node(7);
    root->left->left->right = new_node(2);
    root->right->right->left = new_node(5);
    root->right->right->right = new_node(1);

    vector<string> result;
    binary_tree(root, "", result);

    for(unsigned i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
}

void binary_tree_paths_257_leetcode::binary_tree(TreeNode *node, string str, vector<string> &result)
{
    if(node == nullptr)
    {
        return;
    }

    if(str == "")
    {
        str += to_string(node->val);
    }
    else
    {
        str += "->" + to_string(node->val);
    }

    if(node->left == nullptr && node->right == nullptr)
    {
        result.push_back(str);
    }

    binary_tree(node->left, str, result);
    binary_tree(node->right, str, result);
}

binary_tree_paths_257_leetcode::binary_tree_paths_257_leetcode()
{

}


