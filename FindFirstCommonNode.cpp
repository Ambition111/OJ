// ÌâÄ¿Á´½Ó£º https://www.nowcoder.com/practice/6ab1d9a29e88450685099d45c9e31e46

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        if (pHead1 == nullptr || pHead2 == nullptr)    return nullptr;
        ListNode* ptr1 = pHead1, *ptr2 = pHead2;
        while (ptr1 && ptr2)
        {
            if (ptr1 == ptr2)
                return ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            if (ptr1 == nullptr)
                ptr1 = pHead2;
            else if (ptr2 == nullptr)
                ptr2 = pHead1;
        }
        
        return nullptr;
    }
};
