class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp=head;
        ListNode *f;
        if(temp==NULL || temp->next==NULL)
            return temp;
        else
        {
            ListNode *ahead=swapPairs(temp->next->next);
            f=temp->next;
            f->next=temp;
            temp->next=ahead;
        }
        return f;
    }
};