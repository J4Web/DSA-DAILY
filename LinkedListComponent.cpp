class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        ListNode *temp=head;
        set<int> st;
        for(auto i:nums)
        {
            st.insert(i);
        }
        bool connected=false;
        while(temp!=NULL)
        {
            if(st.find(temp->val)!=st.end() && !(connected))
            {
                ct++;
                connected=true;

            }
            else if(st.find(temp->val)==st.end())
            {
                connected=false;
            }
        }
        return ct;
    }
};