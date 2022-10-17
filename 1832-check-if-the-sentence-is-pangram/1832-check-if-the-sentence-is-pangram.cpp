class Solution {
public:
    bool checkIfPangram(string s) {
    int a[26]={0};
    for(auto i:s) a[i-'a']++;
    for(int i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            return false;
        }
    }
    return true;
    }
};