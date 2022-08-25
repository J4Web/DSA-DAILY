class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int> mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        string res="";
        for(auto i:order){
            res+=string(mp[i],i);
            mp[i]=0;
        }
       for(auto i:mp)
       {
           res+=string(i.second,i.first);
           
       }
        
        return res;
    }
};