
//题目描述：https://leetcode-cn.com/problems/make-the-string-great/ 
class Solution {
public:
    string makeGood(string s) {
        if (s.size() <= 1)   return s;

        auto it = s.begin();
        auto it_begin = s.begin();  //保存指向第一个字符的迭代器
        while (it != s.end())
        {
            auto it1 = it + 1;
            if ((*it1 + 32 == *it || *it1 - 32 == *it) && it1 != s.end())
            {
                    it1 = s.erase(it1);
                    it = s.erase(it);
                    it = it2;       //让it从it_begin开始再和it1比较
            }
            else
                it++;
        }
        return s;
    }
};
