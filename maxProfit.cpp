// 题目链接： https://www.nowcoder.com/practice/64b4262d4e6d4f6181cd45446a5821ec


class Solution {
public:
    /**
     * 
     * @param prices int整型vector 
     * @return int整型
     */
    int Max(vector<int> prices, int start)	// 返回start位置后面的最大值 
    {
        int max = prices[start];
        for (int i = start + 1; i < prices.size(); ++i)
        {
            if (prices[i] > max)
                max = prices[i];
        }
        return max;
    }
    int maxProfit(vector<int>& prices) {
        if (prices.empty())    return 0;
        int max_profit = 0;	 // 最大收益 
        int max_num = 0;	 // i位置后面的最大值 
        for (int i = 0; i < prices.size() - 1; ++i)
        {
            max_num = Max(prices, i + 1);
            if (max_num > prices[i] && max_num - prices[i] > max_profit)
                max_profit = max_num - prices[i];
        }
        return max_profit;
    }
};
