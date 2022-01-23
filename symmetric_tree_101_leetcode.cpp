#include "symmetric_tree_101_leetcode.h"

bool symmetric_tree_101_leetcode::is_symmetric(TreeNode* root)
{

    if(root == nullptr)
    {
       return true;
    }
    else
    {
        if(root->left != nullptr
                &root->right != nullptr)
        {
            if(root->left->val == root->right->val)
            {
                if(root->left->left != nullptr && root->right->right != nullptr)
                {
                    if(root->left->left->val == root->right->right->val)
                    {
                        if(root->left->right != nullptr && root->right->left != nullptr)
                        {
                            if(root->left->right->val == root->right->left->val)
                            {
                                return true;
                            }
                            else
                            {
                                return false;
                            }
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    if(root->left->left == nullptr && root->right->right == nullptr)
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            if(root->left == nullptr && root->right == nullptr)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

bool symmetric_tree_101_leetcode::symmetric_tree()
{
//    TreeNode *root = new TreeNode(1, new TreeNode(2, new TreeNode(3), new TreeNode(4)), new TreeNode(2, new TreeNode(4), new TreeNode(3)));
    TreeNode *root = new TreeNode(1, new TreeNode(2, new TreeNode(4), new TreeNode(4)), new TreeNode(2, new TreeNode(4), new TreeNode(3)));

//    TreeNode *root = new TreeNode(1);

    return is_symmetric(root);
}

symmetric_tree_101_leetcode::symmetric_tree_101_leetcode()
{

}
