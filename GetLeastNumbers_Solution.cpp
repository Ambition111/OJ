// 题目链接：https://www.nowcoder.com/practice/6a296eb82cf844ca8539b57c23e6e9bf

// 方法一 ：优先级队列 
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> output;
        if (input.empty() || k > input.size())
            return output;

        // 建立小堆
        priority_queue<int, vector<int>, greater<int>> pq;
        for (const auto& e : input)
        {
            pq.push(e);
        }
        while (k--)
        {
            output.push_back(pq.top());
            pq.pop();
        }
        return output;
    }
};

/*********************************************************************************/ 
// 方法二 ：快排+二分的思想 
class Solution {
public:
    int Partition(vector<int>& arr, int start, int end)
    {
        int tmp = arr[start];
        while (start < end)
        {
            while (start < end && arr[end] >= tmp)    --end;
            arr[start] = arr[end];
            while (start < end && arr[start] < tmp)    ++start;
            arr[end] = arr[start];
        }
        arr[start] = tmp;
        return start;
    }
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> output;
        if (input.empty() || k <= 0 || k > input.size())
            return output;
        int start = 0, end = input.size() - 1;
        int index = Partition(input, start, end);
        while (index != k - 1)
        {
            if (index > k - 1)
            {
                end = index - 1;
                index = Partition(input, start, end);
            }
            else
            {
                start = index + 1;
                index = Partition(input, start, end);
            }
        }
        for (int i = 0; i < k; ++i)
            output.push_back(input[i]);
        return output;
    }
};
