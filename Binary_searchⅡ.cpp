// ��Ŀ���ӣ�https://www.nowcoder.com/practice/e8a1b01a2df14cb2b228b30ee6a92163


class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     * ���Ŀ��ֵ���ڷ����±꣬���򷵻� -1
     * @param nums int����vector 
     * @param target int���� 
     * @return int����
     */
    int Binary_search��(vector<int>& nums, int target) {
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
