// 题目链接：https://www.nowcoder.com/practice/8c82a5b80378478f9484d87d1c5f12a4

// 跳台阶 
class Solution {
public:
    int jumpFloor(int number) {
        /*
        if (number == 1 || number == 2)
            return number;
        return jumpFloor(number - 1) + jumpFloor(number - 2);
        */
        
        vector<int> jump(number + 1, 1);
        jump[1] = 2;
        for (int i = 2; i <= number; ++i)
        {
            jump[i] = jump[i - 1] + jump[i - 2];
        }
        return jump[number - 1];
    }
};

// 变态跳台阶
// 题目链接：https://www.nowcoder.com/practice/22243d016f6b47f2a6928b4313c85387
class Solution {
public:
    int jumpFloorII(int number) {
        // 推导出：jumpFloorII(number) = 2^number-1
        if (number == 1)
            return 1;
        return 2 * jumpFloorII(number - 1);
        //return 1 << (number - 1);
    }
};
