// 题目链接：https://www.nowcoder.com/practice/c56f6c70fb3f4849bc56e33ff2a50b6b


/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
*/

/*
示例1
输入：{9,3,7}, {6,3}
返回值：{1,0,0,0}
*/

class Solution {
public:
    ListNode* resverseList(ListNode* head)
    {
        if (head == nullptr || head->next == nullptr)    return nullptr;
        ListNode* s = nullptr;
        ListNode* p = head;
        ListNode* q = p->next;
        while (q)
        {
            p->next = s;
            s = p;
            p = q;
            q = q->next;
        }
        p->next = s;
        return p;
    }
    ListNode* addInList(ListNode* head1, ListNode* head2) {
        // write code here
        if (head1 == nullptr && head2 == nullptr)    return nullptr;
        if (head1 == nullptr)    return head2;
        else if (head2 == nullptr)    return head1;
        
        ListNode* node1 = resverseList(head1);
        ListNode* node2 = resverseList(head2);
        
        int sum = 0, carry = 0;    // carry表示进位
        ListNode* sumNode = new ListNode(-1);
        ListNode* cur = sumNode;
        while (node1 || node2)
        {
            sum = carry;    // 如果进位为1，则初始为1
            if (node1 != nullptr)
            {
                sum += node1->val;    // 加上第一个节点的值
                node1 = node1->next;
            }
            if (node2 != nullptr)
            {
                sum += node2->val;    // 加上第二个节点的值
                node2 = node2->next;
            }
            
            if (sum >= 10)
            {
                sum %= 10;
                carry = 1;
            }
            else
                carry = 0;
            
            cur->next = new ListNode(sum);
            cur = cur->next;
        }
        
        if (carry > 0)
            cur->next = new ListNode(carry);

        return resverseList(sumNode->next);
    }
};
