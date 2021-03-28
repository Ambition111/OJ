
// ÌâÄ¿Á´½Ó£ºhttps://leetcode-cn.com/problems/remove-duplicates-from-sorted-list/ 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates_1(ListNode* head) {
        if (head == nullptr || head->next == nullptr)   return head;

        ListNode* p = head;
        ListNode* q = p->next;
        while (p && q)
        {
            if (p->val == q->val)
            {
                q = q->next;
                if (q == nullptr)
                {
                    p->next = q;
                    break;
                }
            }
            else
            {
                p->next = q;
                p = q;
                q = q->next;
            }
        }
        return head;
    }
};
