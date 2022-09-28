class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *prev=nullptr;
        for(int i=0;i <n;i++)
        {
            fast=fast->next;
        }
        while(fast!=nullptr)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
        if(slow==head)
        {
            head=head->next;
            return head;
        }
        prev->next=slow->next;
        return head;
    }
};