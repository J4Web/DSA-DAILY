class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        map<char,int> mp1;
        if(s.size()!=t.size()) return false;
        for(auto i:s)
        {
            mp[i]++;
        }
        for(auto i:t)
        {
            mp1[i]++;
        }
        for(auto i:s)
        {
            if(mp[i]!=mp1[i]) return false;
        }
        return true;
    }
};