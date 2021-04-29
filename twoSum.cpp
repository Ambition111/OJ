// ��Ŀ���ӣ�https://www.nowcoder.com/practice/20ef0972485e41019e39543e8e895b7f

// ����һ �������ⷨ O(n^2) 
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> output;
        if (numbers.size() < 2)    return output;
        bool flag = true;
        for (int i = 0; i < numbers.size() - 1; ++i)
        {
            for (int j = 1; j < numbers.size(); ++j)
            {
                if (numbers[i] + numbers[j] == target && i != j)
                {
                    output.push_back(i + 1);
                    output.push_back(j + 1);
                    flag = false;
                    break;
                }
            }
            if (!flag)
                break;
        }
        return output;
    }
};

/***********************************************************************/
// ����������ϣ
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> output;
        if (numbers.size() < 2)    return output;
        unordered_map<int, int> m;
        for (int i = 0; i < numbers.size(); ++i)
            m[numbers[i]] = i;    // ��numbers�е�Ԫ��i����map��i�±���
        
        for (int i = 0; i < numbers.size(); ++i)
        {
             //ÿ����һ��numbers[i]��ȥ��Ӧ��m������û��target - numbers[i]
             //����оͷ��ؽ��
             //���û�о�����һ��
            auto search = m.find(target - numbers[i]);
            if (search != m.end() && search->second != i)
            {
                output.push_back(i + 1);
                output.push_back(search->second + 1);
                break;
            }
        }
        return output;
    }
}; 
