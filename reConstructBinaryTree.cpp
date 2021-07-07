// ÌâÄ¿Á´½Ó£ºhttps://www.nowcoder.com/practice/8a19cbe657394eeaac2f6ea9b0f6fcf6

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if (pre.empty() || vin.empty())    return nullptr;
        TreeNode* root = new TreeNode(pre[0]);
        int pos = 0;
        while (vin[pos] != root->val)
        {
            pos++;
        }
        vector<int> left_pre(pre.begin() + 1, pre.begin() + pos + 1);
        vector<int> right_pre(pre.begin() + pos + 1, pre.end());
        vector<int> left_vin(vin.begin(), vin.begin() + pos + 1);
        vector<int> right_vin(vin.begin() + pos + 1, vin.end());
        
        root->left = reConstructBinaryTree(left_pre, left_vin);
        root->right = reConstructBinaryTree(right_pre, right_vin);
        
        return root;
    }
};
