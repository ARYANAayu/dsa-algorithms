class Solution {
public:
    ListNode *getIntersectionNode(ListNode * headA, ListNode * headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr; 
        }

        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;

        while (ptr1 != ptr2) {
            ptr1 = (ptr1 == nullptr) ? headB : ptr1->next;
            ptr2 = (ptr2 == nullptr) ? headA : ptr2->next;
        }

        return ptr1;
    }
};
