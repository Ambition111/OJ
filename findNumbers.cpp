// ÌâÄ¿Á´½Ó£º https://leetcode-cn.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        
        for (int i = 0; i < nums.size(); ++i)
        {
            int count = 0;
            while (nums[i])
            {
                nums[i] /= 10;
                count++;
            }
            if (count % 2 == 0)
                res++;
        }
        return res;
    }
};
