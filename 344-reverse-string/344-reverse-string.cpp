class Solution {
public:
    void rev(vector<char>& s,int i, int j)
    {
        if(i>j) return;
        swap(s[i],s[j]);
        ++i;
        --j;
        rev(s,i,j);
        
    }
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
        rev(s,i,j);
    }
};