#include "path_sum_2_113_leetcode.h"

TreeNode* path_sum_2_113_leetcode::new_node(int data)
{
    TreeNode* Node = new TreeNode();
    Node->val = data;
    Node->left = nullptr;
    Node->right = nullptr;

    return (Node);
}

void checker (TreeNode *root, int targetSum, int s, vector<int> v, vector<vector<int> >& result)
{
    if(root == nullptr)
    {
        return;
    }

    s += root->val;
    v.push_back(root->val);

    if(root->left == nullptr && root->right == nullptr)
    {
        if(s == targetSum)
        {
            result.push_back(v);
            return;
        }
    }

    checker(root->left, targetSum, s, v, result);
    checker(root->right, targetSum, s, v, result);
}

vector< vector<int> > path_sum_2_113_leetcode::sum(TreeNode *root, int targetSum)
{
    vector< vector< int > > result;
    vector< int > v;

    checker(root, targetSum, 0, v, result);

    return result;
}

void path_sum_2_113_leetcode::path_sum()
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

    vector< vector<int> > result = sum(root, 22);

    for(unsigned i = 0; i < result.size(); i++)
    {
        for(unsigned j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }

        cout << endl;
    }

}

path_sum_2_113_leetcode::path_sum_2_113_leetcode()
{

}


