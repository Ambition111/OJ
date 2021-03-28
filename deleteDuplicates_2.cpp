// 题目链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list-ii/ 

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
    ListNode* deleteDuplicates_2(ListNode* head) {
        if (head == nullptr || head->next == nullptr)   return head;

        ListNode* dummy = new ListNode(-1, head); 
        ListNode* cur = dummy;

        while (cur->next && cur->next->next)    //注意条件
        {
            if (cur->next->val == cur->next->next->val)
            {
                int x = cur->next->val;
                while (cur->next->val == x)
                {
                    cur->next = cur->next->next;
                    if (cur->next == nullptr)
                        break;
                }
            }
            else
                cur = cur->next;
        }
        return dummy->next;
    }
};
