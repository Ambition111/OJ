// ÌâÄ¿Á´½Ó£ºhttps://www.nowcoder.com/practice/459bd355da1549fa8a49e350bf3df484

class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        if (array.empty())
            return 0;
        // F[0] = array[0];
        vector<int> maxSum(array);
        for (int i = 1; i < array.size(); ++i)
        {
            // F[i] = max(F(i - 1) + array[i], array[i]);
            maxSum[i] = max(maxSum[i - 1] + array[i], array[i]);
        }
        
        int ret = maxSum[0];
        for (int i = 1; i < maxSum.size(); ++i)
        {
            if (maxSum[i] > ret)
                ret = maxSum[i];
        }
        return ret;
    }
};
