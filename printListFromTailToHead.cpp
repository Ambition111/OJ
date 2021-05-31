// ÌâÄ¿Á´½Ó£ºhttps://www.nowcoder.com/practice/d0267f7f55b3412ba93bd35cfa8e8035

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> ret;
        if (head == nullptr)    return ret;
        stack<int> st;
        while (head != nullptr)
        {
            st.push(head->val);
            head = head->next;
        }
        while (!st.empty())
        {
            ret.push_back(st.top());
            st.pop();
        }
        return ret;
    }
};
