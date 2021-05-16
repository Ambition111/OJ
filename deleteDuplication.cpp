// ÌâÄ¿Á´½Ó£ºhttps://www.nowcoder.com/practice/fc533c45b73a41b0b44ccba763f866ef

class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead) {
        if (pHead == nullptr || pHead->next == nullptr)
            return pHead;
        ListNode* dummy = new ListNode(-1);
        dummy->next = pHead;
        ListNode* p = dummy;
        
        while (p->next && p->next->next)
        {
            if (p->next->val == p->next->next->val)
            {
                int x = p->next->val;
                while (p->next->val == x && p->next)
                {
                    p->next = p->next->next;
                }
            }
            else
                p = p->next;
        }
        return dummy->next;
    }
};
