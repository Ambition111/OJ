// 题目链接：https://www.nowcoder.com/practice/20ef0972485e41019e39543e8e895b7f

// 方法一 ：暴力解法 O(n^2) 
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> output;
        if (numbers.size() < 2)    return output;
        bool flag = true;
        for (int i = 0; i < numbers.size() - 1; ++i)
        {
            for (int j = 1; j < numbers.size(); ++j)
            {
                if (numbers[i] + numbers[j] == target && i != j)
                {
                    output.push_back(i + 1);
                    output.push_back(j + 1);
                    flag = false;
                    break;
                }
            }
            if (!flag)
                break;
        }
        return output;
    }
};

/***********************************************************************/
// 方法二：哈希
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> output;
        if (numbers.size() < 2)    return output;
        unordered_map<int, int> m;
        for (int i = 0; i < numbers.size(); ++i)
            m[numbers[i]] = i;    // 将numbers中的元素i放入map的i下标中
        
        for (int i = 0; i < numbers.size(); ++i)
        {
             //每遍历一个numbers[i]就去对应的m里找有没有target - numbers[i]
             //如果有就返回结果
             //如果没有就找下一个
            auto search = m.find(target - numbers[i]);
            if (search != m.end() && search->second != i)
            {
                output.push_back(i + 1);
                output.push_back(search->second + 1);
                break;
            }
        }
        return output;
    }
}; 
