
//��Ŀ������https://leetcode-cn.com/problems/make-the-string-great/ 
class Solution {
public:
    string makeGood(string s) {
        if (s.size() <= 1)   return s;

        auto it = s.begin();
        auto it_begin = s.begin();  //����ָ���һ���ַ��ĵ�����
        while (it != s.end())
        {
            auto it1 = it + 1;
            if ((*it1 + 32 == *it || *it1 - 32 == *it) && it1 != s.end())
            {
                    it1 = s.erase(it1);
                    it = s.erase(it);
                    it = it2;       //��it��it_begin��ʼ�ٺ�it1�Ƚ�
            }
            else
                it++;
        }
        return s;
    }
};
