// ��Ŀ���ӣ�https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-zui-jin-gong-gong-zu-xian-lcof/ 

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
            // �����ǰ�ڵ�����������������ԣ�����ǰ�ڵ����p��С��q����ǰ�ڵ�С��p������q����������������Ƚڵ�
            if ((cur->val >= p->val && cur->val <= q->val) || (cur->val <= p->val && cur->val >= q->val))
                return cur;
            
            // �����ǰ�ڵ����p������q��������������Ƚڵ��ڵ�ǰ�ڵ��������
            else if (cur->val > p->val && cur->val > q->val)
                cur = cur->left;
            else
                cur = cur->right;
        }
        return nullptr;
    }
};
