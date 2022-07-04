#include<bits/stdc++.h>
   
class Solution {
public:
    
     struct job{
        int st;
        int et;
        int pt;
        job(int s,int e,int p)
        {
            st=s;
            et=e;
            pt=p;
        }

    };

   static bool cmp(struct job &i1,struct job &i2)
    {
        return i1.st<i2.st;
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<job> st;
        
        for(int i=0;i<startTime.size();i++)
        {
           struct job s1(startTime[i],endTime[i],profit[i]);
            st.push_back(s1);
        }
        sort(st.begin(),st.end(),cmp);
        // for(auto i:st)
        // {
        //     cout<<"our st : "<<i.st<<"\n";
        //     cout<<"our et : "<<i.et<<"\n";
        //     cout<<"our pr : "<<i.pt<<"\n";
        //     cout<<"next"<<"\n";
        // }
        map<int,int> sp;
        int ans=0;
        int n=startTime.size()-1;
       for(int i =n ; i>=0 ;i--)
        {
            int profit= st[i].pt;
            int endt=st[i].et;
            auto it=sp.lower_bound(endt);
            if(it != sp.end()){
                profit += it->second;
            }
            ans=max(ans,profit);
            sp[st[i].st]=ans;
        }
    
        return ans;
    }
};
