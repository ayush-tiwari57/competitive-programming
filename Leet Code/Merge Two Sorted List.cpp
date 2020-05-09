class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(l1==NULL) return l2;
        if (l2==NULL) return l1;
        if (l2->val < l1->val) {
            ListNode *temp0 = l1;
            l1 = l2;
            l2 = temp0;
        }
        ListNode *head = l1;
        while(true){
            if (l1->next==NULL) {
                l1->next=l2;
                break;
            }
            if (l2->val<l1->next->val){
                ListNode *temp1=l1->next;
                l1->next=l2;
                l2=temp1;
                if (l2 == NULL)
                    break;
            }
            else{
                l1=l1->next;
            }
        }
        return head;
    }
};