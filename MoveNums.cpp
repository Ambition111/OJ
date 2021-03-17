/*
	给定一个数组，将数组中的重复元素同一移动到后面。
	示例：nums = [1,2,2,3,4,4,5,6,6,7];
	输出：nums = [1,2,3,4,5,6,7,2,4,6]; 
*/
class Solution {
public:
    vector<int> MoveNums(vector<int>& nums) {
        auto it = nums.begin();

        while (it != nums.end())
        {
            auto it1 = it + 1;
            if (*it == *it1 && it1 != nums.end())
            {
                nums.push_back(*it1);
                it1 = nums.erase(it1);
            }
            else
                it++;
        }
        return nums;
    }
};
