// ��Ŀ���ӣ�https://www.nowcoder.com/practice/04a5560e43e24e9db4595865dc9c63a3

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
     * @param root TreeNode�� 
     * @return int����vector<vector<>>
     */
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root == nullptr)    return res;
        
        queue<TreeNode*> qu;
        qu.push(root);    //�Ƚ����ڵ����
        while (!qu.empty())
        {
            vector<int> tmp;    //���������ÿһ��Ľڵ�ֵ
            int size = qu.size();

            while (size--)
            {
                TreeNode* node = qu.front();
                tmp.push_back(node->val);
                if (node->left)
                    qu.push(node->left);
                if (node->right)
                    qu.push(node->right);
                qu.pop();
            }
           res.push_back(tmp);
        }
        return res;
    }
};
