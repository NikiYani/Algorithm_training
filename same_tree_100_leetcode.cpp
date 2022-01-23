#include "same_tree_100_leetcode.h"

bool same_tree_100::is_same_tree(TreeNode* node_1, TreeNode* node_2)
{
    if(node_1 == nullptr
            && node_2 == nullptr)                   // пустые деревья
    {
        return true;
    }
    else
    {
        if(node_1->left == nullptr
                && node_2->left == nullptr)              // деревья из одного узла / дошли до листа
        {
            if(node_1->val == node_2->val)
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
            if(node_1->val == node_2->val)
            {
                if(node_1->left != nullptr
                        && node_2->left != nullptr)       // рекурсия на левую ветку
                {
                    return is_same_tree(node_1->left, node_2->left);
                }
                else
                {
                    if(node_1->right != nullptr
                            && node_2->right != nullptr)       // рекурсия на правую ветку
                    {
                        return is_same_tree(node_1->right, node_2->right);
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
    }


}

bool same_tree_100::tree_comparison()
{
//    TreeNode *root_1 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
//    TreeNode *root_2 = new TreeNode(1, new TreeNode(2), new TreeNode(3));

//    TreeNode *root_1 = new TreeNode(1, new TreeNode(2), nullptr);
//    TreeNode *root_2 = new TreeNode(1, nullptr, new TreeNode(3));

    TreeNode *root_1 = new TreeNode(1, new TreeNode(2), new TreeNode(1));
    TreeNode *root_2 = new TreeNode(1, new TreeNode(1), new TreeNode(2));

//    TreeNode *root_1 = nullptr;
//    TreeNode *root_2 = nullptr;

    return is_same_tree(root_1, root_2);
}

same_tree_100::same_tree_100()
{

}
