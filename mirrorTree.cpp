// 题目链接： https://leetcode-cn.com/problems/er-cha-shu-de-jing-xiang-lcof/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    TreeNode* mirrorTree(TreeNode* root) {
        if (root == nullptr)    return root;
        else
        {
            swap(root->left, root->right);	//交换左右子树 
            mirrorTree(root->left);
            mirrorTree(root->right);
        }
        
        return root;
    }
};
