// 题目链接：https://www.nowcoder.com/practice/a9fec6c46a684ad5a3abd4e365a9d362

/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */

class Solution {
public:
    /**
     * 
     * @param root TreeNode类 the root of binary tree
     * @return int整型vector<vector<>>
     */
    void PreOrder(TreeNode* root, vector<int>& pre)
    {
        if (root != nullptr)
        {
            pre.push_back(root->val);
            PreOrder(root->left, pre);
            PreOrder(root->right, pre);
        }
    }
    
    void InOrder(TreeNode* root, vector<int>& in)
    {
        if (root != nullptr)
        {
            InOrder(root->left, in);
            in.push_back(root->val);
            InOrder(root->right, in);
        }
    }
    void PostOrder(TreeNode* root, vector<int>& post)
    {
        if (root != nullptr)
        {
            PostOrder(root->left, post);
            PostOrder(root->right, post);
            post.push_back(root->val);
        }
    }
    vector<vector<int>> threeOrders(TreeNode* root) {
        vector<vector<int>> ret;
        vector<int> pre, in, post;
        if (root == nullptr)    return ret;
        
        PreOrder(root, pre);
        InOrder(root, in);
        PostOrder(root, post);
        
        return ret = {pre, in, post};
    }
};
