// ÌâÄ¿Á´½Ó£ºhttps://www.nowcoder.com/practice/f95dcdafbde44b22a6d741baf71653f6


/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr)    return head;
        
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* p = dummy;
        ListNode* q = dummy;
        while (n > 0)
        {
            p = p->next;
            n--;
        }
        
        while (p->next != nullptr)
        {
            p = p->next;
            q = q->next;
        }
        if (q->next->next != nullptr)
            q->next = q->next->next;
        else
            q->next = nullptr;
        return dummy->next;
    }
};
