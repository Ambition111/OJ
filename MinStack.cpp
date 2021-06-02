// 题目链接：https://www.nowcoder.com/practice/4c776177d2c04c2494f2555c9fcc1e49

class Solution {
public:
    void push(int value) {
        st.push(value);
        if (min_st.empty() || value < min_st.top())
            min_st.push(value);
        else // 否则将当前最小值再次压入min_st中
            min_st.push(min_st.top());
    }
    void pop() {
        if (!st.empty() && !min_st.empty())
        {
            st.pop();
            min_st.pop();
        }
    }
    int top() {
        return st.top();
    }
    int min() {
        return min_st.top();
    }
private:
    stack<int> st;
    stack<int> min_st;
};
