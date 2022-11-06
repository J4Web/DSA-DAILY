#include<bits/stdc++.h>
class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k==1){
        string res="~";
        int n=s.size();
        for(auto i=0;i<n;i++)
        {
            string temp=s.substr(0,k);
            cout<<temp<<"\n";
            sort(temp.rbegin(),temp.rend());
            auto itr=s.find(temp[0]);
            s.erase(s.begin()+itr);
            s+=temp[0];
            cout<<s<<"\n";
            res=min(res,s);
        }
        return res;
        }
        sort(begin(s),end(s));
        return s;
    }
};