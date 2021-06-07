// 题目链接：https://www.nowcoder.com/practice/04a5560e43e24e9db4595865dc9c63a3

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
     * @param root TreeNode类 
     * @return int整型vector<vector<>>
     */
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root == nullptr)    return res;
        
        queue<TreeNode*> qu;
        qu.push(root);    //先将根节点入队
        while (!qu.empty())
        {
            vector<int> tmp;    //保存二叉树每一层的节点值
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
