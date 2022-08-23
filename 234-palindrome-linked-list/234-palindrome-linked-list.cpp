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
    bool isPalindrome(ListNode* head) {
        ListNode *mid= getMid(head);
        ListNode *nxtMid=mid->next;
        mid->next=NULL;
        nxtMid=reverse(nxtMid);
        while(head!=NULL&&nxtMid!=NULL)
        {
            if(head->val!=nxtMid->val)
                return false;
            head=head->next;
            nxtMid=nxtMid->next;
        }
        return true;
    }
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* cur=head;
        ListNode* prev=NULL;
        ListNode* nxt=NULL;
        if(head==NULL)
            return head;
        else{
            while(cur!=NULL)
            {
                nxt=cur->next;
                cur->next=prev;
                prev=cur;
                cur=nxt;
            }
            return prev;
        }
    }
    
    ListNode* getMid(ListNode* head)
    {
        ListNode* slow= head;
        ListNode* fast= head;
        while(fast!=NULL && fast->next!=NULL &&  fast->next->next!=NULL )
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};