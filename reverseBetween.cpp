//题目链接：https://leetcode-cn.com/problems/reverse-linked-list-ii/ 

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || head->next == nullptr || left == right)   return head;

        ListNode* prev = new ListNode(-1);      //创建一个前驱节点
        prev->next = head;
        int pos = 1;
        while (pos < left)      //找到left位置的前一个节点
        {
            prev = prev->next;
            pos++;
        }

        ListNode* left_node = prev->next;   //left位置的节点
        ListNode* s = left_node;
        ListNode* p = left_node->next;
        ListNode* q = p->next;

        while (p != nullptr && pos < right)     //反转
        {
            p->next = s;
            pos++;
            s = p;
            p = q;
            if (q != nullptr)
                q = q->next;
        }

        prev->next = s;             //将left的前驱节点指向right位置的节点
        left_node->next = p;        //将left节点指向right位置的下一个节点

        return prev->val == -1 ? prev->next : head;
    }
};
