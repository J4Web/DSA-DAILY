class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        vector<pair<int,char>> res;
        for(auto i:mp)
        {
            res.emplace_back(i.second,i.first);
            
        }
        sort(begin(res),end(res));
        string ans="";
        for(auto i:res)
        {
            ans=string(i.first,i.second)+ans;
        }
        return ans;
    }
};