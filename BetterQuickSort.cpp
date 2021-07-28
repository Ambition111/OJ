class Solution {
public:
    int Partition(vector<int>& nums, int start, int end)
    {
        int i = start;
        int j = end;
        int index = rand() % (j - i + 1) + i;
        swap(nums[index], nums[i]);
        int tmp = nums[i];
        while (i < j)
        {
            while (i < j && nums[j] >= tmp)    --j;
            nums[i] = nums[j];
            while (i < j && nums[i] < tmp)     ++i;
            nums[j] = nums[i];
        }
        nums[i] = tmp;
        return i;
    }
    void Quick(vector<int>& nums, int start, int end)
    {
        if (start >= end)   return; 
        else
        {
            int mid = Partition(nums, start, end);
            Quick(nums, start, mid - 1);
            Quick(nums, mid + 1, end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        if (nums.empty())   return nums;
        Quick(nums, 0, nums.size() - 1);
        return nums;
    }
};
