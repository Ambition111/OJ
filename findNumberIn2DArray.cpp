// 题目链接：https://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof/


class Solution {
public:
    //从右上角开始比较
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0)     return false;
        int row = 0;
        int col = matrix[row].size() - 1;
        while (row < matrix.size() && col >= 0)
        {
            int index = matrix[row][col];
            if (index == target)
                return true;
            else if (target > index)
                row += 1; 
            else if (target < index)
                col -= 1;
        }
        return false;
    }
};
////////////////////////////////////////////////////////////////
class Solution {
public:
    //从左下角开始比较
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0 || matrix[0].size() == 0)     return false;
        int row = matrix.size() - 1;
        int col = 0;
        while (col < matrix[0].size() && row >= 0)
        {
            int index = matrix[row][col];
            if (index == target)
                return true;
            else if (target > index)
                col += 1;
            else if (target < index)
                row -= 1;
        }
        return false;
    }
};
