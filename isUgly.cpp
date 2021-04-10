// 题目链接：https://leetcode-cn.com/problems/ugly-number/

// 思路：可以对 n 反复除以 2,3,5。直到 nn 不再包含质因数 2,3,5。
//       若剩下的数等于 1，则说明 n 不包含其他质因数，是丑数；否则，说明 n 包含其他质因数，不是丑数
 
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
