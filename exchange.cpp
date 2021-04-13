// 题目链接：https://leetcode-cn.com/problems/diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof/


// 方法一  
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        vector<int> ret(nums.size(), 0);
        int i = 0, j = nums.size() - 1;

        for (const auto& e : nums)
        {
            if (e % 2 == 1)
                ret[i++] = e;
            else
                ret[j--] = e;
        }
        return ret;
    }
};

// 方法二
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int i = -1, j = 0;
        while (j < nums.size())
        {
            if (nums[j] % 2 == 1)
                swap(nums[++i], nums[j]);
            ++j;
        }
        return nums;
    }
}; 

// 方法三
 class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while(left < right)
        {
            if (nums[left] % 2 == 1){
                ++left;
                continue;
            }
            else if (nums[right] % 2 == 0){
                --right;
                continue;
            }            
            swap(nums[left++], nums[right--]);
        }
        return nums;
    }
};
