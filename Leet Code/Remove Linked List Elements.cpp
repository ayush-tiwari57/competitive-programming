class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val == val)
            head = head->next;
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr) {
            ListNode* next = curr->next;
            if(curr->val == val) prev->next = next;
            else prev = curr;
            curr = next;
            if(next) next = next->next;
            else continue;
        }
        return head;
    }
};