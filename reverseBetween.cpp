//��Ŀ���ӣ�https://leetcode-cn.com/problems/reverse-linked-list-ii/ 

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

        ListNode* prev = new ListNode(-1);      //����һ��ǰ���ڵ�
        prev->next = head;
        int pos = 1;
        while (pos < left)      //�ҵ�leftλ�õ�ǰһ���ڵ�
        {
            prev = prev->next;
            pos++;
        }

        ListNode* left_node = prev->next;   //leftλ�õĽڵ�
        ListNode* s = left_node;
        ListNode* p = left_node->next;
        ListNode* q = p->next;

        while (p != nullptr && pos < right)     //��ת
        {
            p->next = s;
            pos++;
            s = p;
            p = q;
            if (q != nullptr)
                q = q->next;
        }

        prev->next = s;             //��left��ǰ���ڵ�ָ��rightλ�õĽڵ�
        left_node->next = p;        //��left�ڵ�ָ��rightλ�õ���һ���ڵ�

        return prev->val == -1 ? prev->next : head;
    }
};
