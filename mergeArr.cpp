// 题目链接：https://www.nowcoder.com/practice/89865d4375634fc484f3a24b7fe65665


class Solution {
public:
    void mergeArr(int A[], int m, int B[], int n) {
        // 定义两个指针分别指向两数组的尾部元素
        int i = m - 1;
        int j = n - 1;
        int size = m + n - 1;    // 合并后的A数组总长度
        
        while (i >= 0 && j >= 0)
        {
            if (A[i] > B[j])
                A[size--] = A[i--];
            else
                A[size--] = B[j--];
        }
        
        while (j >= 0)
            A[size--] = B[j--];
    }
};
