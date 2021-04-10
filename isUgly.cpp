// ��Ŀ���ӣ�https://leetcode-cn.com/problems/ugly-number/

// ˼·�����Զ� n �������� 2,3,5��ֱ�� nn ���ٰ��������� 2,3,5��
//       ��ʣ�µ������� 1����˵�� n �������������������ǳ���������˵�� n �������������������ǳ���
 
class Solution {
public:
    bool isUgly(int n) {
        if (n < 1)      return false;

        while (n % 2 == 0)      n /= 2;
        while (n % 3 == 0)      n /= 3;
        while (n % 5 == 0)      n /= 5;

        return n == 1;
    }
};
