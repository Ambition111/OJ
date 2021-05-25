// ��Ŀ���ӣ�https://www.nowcoder.com/practice/e016ad9b7f0b45048c58a9f27ba618bf


// ����һ�����ȼ����У��ѣ� 
class Solution {
public:
    int findKth(vector<int> a, int n, int K) {
        if (a.empty())    return -1;
        
        priority_queue<int> pq;
        for (const auto &e : a)
            pq.push(e);
        while (--K)
            pq.pop();
        
        return pq.top();
    }
};

// ������������ + ����˼��
class Solution {
public:
    int Partition(vector<int>& arr, int left, int right)
    {
        int i = left, j = right;
        int tmp = arr[i];
        while (i < j)
        {
            while (i < j && arr[j] <= tmp)    --j;
            arr[i] = arr[j];
            while (i < j && arr[i] > tmp)     ++i;
            arr[j] = arr[i];
        }
        arr[i] = tmp;
        return i;
    }
    int findKth(vector<int> a, int n, int K) {
        if (a.empty())    return -1;
        
        int start = 0, end = n - 1;
        int index = Partition(a, start, end);
        while (index != K - 1)
        {
            if (index < K - 1)
                start = index + 1;
            else
                end = index - 1;
            index = Partition(a, start, end);
        }
        return a[index];
    }
}; 
