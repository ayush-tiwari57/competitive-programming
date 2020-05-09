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
    ListNode* oddEvenList(ListNode* head) {
        while(head==NULL) return NULL;
        ListNode *odd= head;
        ListNode *even =head->next, *evenHead=even;
        while(even!=NULL and even->next!=NULL){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
            
        }
        odd->next=evenHead;
        return head;
        
    }
};