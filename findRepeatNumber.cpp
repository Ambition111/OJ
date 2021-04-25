// ÌâÄ¿Á´½Ó£ºhttps://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof/


class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        if (nums.size() <= 1)   return -1;
        for (int i = 0; i < nums.size(); ++i)
        {
            while (nums[i] != i)
            {
                if (nums[i] == nums[nums[i]])
                    return nums[i];
                int tmp = nums[i];
                nums[i] = nums[tmp];
                nums[tmp] = tmp;
            }
        }
        return -1;
    }
};
