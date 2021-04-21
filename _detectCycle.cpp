// ÌâÄ¿Á´½Ó£ºhttps://www.nowcoder.com/practice/6e630519bf86480296d0f1c868d425ad


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr)    return nullptr;
        
        ListNode* fast = head;
        ListNode* low = head;
        
        while (fast && fast->next)
        {
            fast = fast->next->next;
            low = low->next;
            if (fast == low)
            {
                ListNode* p = head;
                while (p != low)
                {
                    p = p->next;
                    low = low->next;
                }
                return p;
            }
        }
        
        return nullptr;
    }
};
