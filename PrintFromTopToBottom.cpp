// ��Ŀ���ӣ�https://www.nowcoder.com/practice/7fe2212963db4790b57431d9ed259701

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> ret;
        if (root == nullptr)    return ret;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* cur = nullptr;
        while (!q.empty())
        {
            cur = q.front();
            ret.push_back(cur->val);
            if (cur->left)		// �����ǰ��ͷ�ڵ�����ӽڵ㲻Ϊ�գ���� 
                q.push(cur->left);
            if (cur->right)		// �����ǰ��ͷ�ڵ�����ӽڵ㲻Ϊ�գ���� 
                q.push(cur->right);
            q.pop();
        }
        return ret;
    }
};
