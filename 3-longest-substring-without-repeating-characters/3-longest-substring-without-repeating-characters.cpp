class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(!s.size() || s.size()==1) return s.size();
        unordered_map<char,int> mp;
        int i=0;
        int j=0;
        int n=s.size();
        int len_of_window=0,mx_len_window=0;
        int st_window=-1;
        while(j<n)
        {
            char ch=s[j];
            if(mp.count(ch) and mp[ch]>=i)
            {
                i=mp[ch]+1;
                len_of_window=(j-i);
            }
            mp[ch]=j;
            len_of_window++;
            j++;
            if(len_of_window>mx_len_window)
            {
                mx_len_window=len_of_window;
                st_window=i;
            }
        }
        return (s.substr(st_window,mx_len_window)).size();
    }
};