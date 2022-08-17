class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> s={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> st;
        for(auto c:words)
        {
            string trans;
            for(auto ch:c)
            {
                trans+=s[ch-97];
            }
            st.insert(trans);
            
        }
        return st.size();
    }
};