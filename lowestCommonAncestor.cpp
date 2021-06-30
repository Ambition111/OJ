// 题目链接：https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-zui-jin-gong-gong-zu-xian-lcof/ 

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr)    return nullptr;
        TreeNode* cur = root;
        while (cur != nullptr)
        {
            // 如果当前节点满足二叉搜索树特性，即当前节点大于p并小于q，或当前节点小于p并大于q，就是最近公共祖先节点
            if ((cur->val >= p->val && cur->val <= q->val) || (cur->val <= p->val && cur->val >= q->val))
                return cur;
            
            // 如果当前节点大于p并大于q，即最近公共祖先节点在当前节点的左子树
            else if (cur->val > p->val && cur->val > q->val)
                cur = cur->left;
            else
                cur = cur->right;
        }
        return nullptr;
    }
};
