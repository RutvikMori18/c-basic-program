class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while(fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
            if(fast->next != nullptr) fast = fast->next;
        }
        return slow;
    }
};
