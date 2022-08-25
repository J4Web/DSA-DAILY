class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string,vector<string>> mp;
        for(auto i:strs)
        {
            string s=i;
            sort(s.begin(),s.end());
            mp[s].push_back(i);
            
        }
        for(auto i:mp)
        {
            res.push_back(i.second);
        }
        return res;
    }
};
