// 题目链接： https://www.nowcoder.com/practice/37548e94a270412c8b9fb85643c8ccc2

class Solution {
public:
    /**
     * 
     * @param s string字符串 
     * @return bool布尔型
     */
    bool isValid(string s) {
        if (s.size() <= 1)    return false;
        stack<char> tmp;
        for (const auto &e : s)
        {
            if (e == '(' || e == '{' || e == '[')
                tmp.push(e);
            else if (!tmp.empty() && ((e == ')' && tmp.top() == '(') || (e == '}' && tmp.top() == '{')
                     || (e == ']' && tmp.top() == '[')))
                tmp.pop();
            else
                tmp.push(e);
        }
        return tmp.empty();
    }
};
