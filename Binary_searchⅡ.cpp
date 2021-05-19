// 题目链接：https://www.nowcoder.com/practice/e8a1b01a2df14cb2b228b30ee6a92163


class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 如果目标值存在返回下标，否则返回 -1
     * @param nums int整型vector 
     * @param target int整型 
     * @return int整型
     */
    int Binary_searchⅡ(vector<int>& nums, int target) {
        if (nums.empty())    return -1;
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right)
        {
            int mid = (left + right) >> 1;
            if (nums[mid] == target)
            {
                while (mid >= left && nums[mid] == target)    mid--;
                return mid + 1;
            }
            else if (nums[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return -1;
    }
};
