// 题目链接：https://www.nowcoder.com/practice/c3120c1c1bc44ad986259c0cf0f0b80e

/*
示例1
输入："This is a sample",16
返回值："SAMPLE A IS tHIS"
*/

class Solution {
public:
    string trans(string s, int n) {
        string str;
        if (s.empty())    return str;
        
        int j = n - 1;
        int i = j;
        while (i >= 0)
        {
            while (s[i] != ' ' && i >= 0)
            {
                if (islower(s[i]))
                {
                    s[i] -= 32;
                    --i;
                }
                else if (isupper(s[i]))
                {
                    s[i] += 32;
                    --i;
                }
            }
            int tmp = i + 1;
            while (tmp <= j)
            {
                str += s[tmp++];
            }
            str += s[i--];
            j = i;
        }
        return str;
    }
};
