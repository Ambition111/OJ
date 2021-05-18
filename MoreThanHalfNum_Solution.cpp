// 题目链接：https://www.nowcoder.com/practice/e8a1b01a2df14cb2b228b30ee6a92163


// 方法一：利用次数
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        
        if (numbers.empty())    return -1;
        
        int numCount = 1;
        int num = numbers[0];
        for (int i = 1; i < numbers.size(); ++i)
        {
            if (numbers[i] == num)
                numCount++;
            else
                numCount--;
            if (numCount == 0)
            {
                numCount++;
                num = numbers[i];
            }
        }
        return num;
    }
};

//////////////////////////////////////////////////////////////////////////
// 方法二：利用map
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        if (numbers.empty())    return -1;
        unordered_map<int, int> um(0);
        
        for (int i = 0; i < numbers.size(); ++i)
        {
            um[numbers[i]]++;
        }
        int index = 0;
        int Max = 0;
        for (const auto &e : um)
        {
            Max = max(e.second, Max);
        }
        for (const auto &e : um)
        {
            if (e.second == Max)
                index = e.first;
        }
        return index;
    }
};
