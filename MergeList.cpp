// ÌâÄ¿Á´½Ó£ºhttps://www.nowcoder.com/practice/d8b6b4358f774294a89de2a6ac4d9337

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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
        if (pHead1 == nullptr && pHead2 == nullptr)    return nullptr;
        if (pHead1 == nullptr || pHead2 == nullptr)
            return pHead1 == nullptr ? pHead2 : pHead1;
        
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        while (pHead1 && pHead2)
        {
            if (pHead1->val < pHead2->val)
            {
                tail->next = pHead1;
                pHead1 = pHead1->next;
            }
            else
            {
                tail->next = pHead2;
                pHead2 = pHead2->next;
            }
            tail = tail->next;
        }
        if (pHead1 == nullptr)
            tail->next = pHead2;
        else
            tail->next = pHead1;
        return dummy->next;
    }
};
