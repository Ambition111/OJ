// ÌâÄ¿Á´½Ó£º https://leetcode-cn.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_account = 0;
        for (int i = 0; i < accounts.size(); ++i)
        {
            int tmp = 0;
            for (int j = 0; j < accounts[i].size(); ++j)
            {
                tmp += accounts[i][j];
            }
            if (tmp >= max_account)
                max_account = tmp;
        }
        return max_account;
    }
};
