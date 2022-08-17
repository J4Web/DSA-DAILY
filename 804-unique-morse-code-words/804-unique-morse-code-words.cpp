class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        //just make an array to map each lowercase alphabets to its transformation 
        vector<string> s={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        //make a set to get unique transformation
        set<string> st;
        
        //looping through each word
        for(auto c:words)
        {
            //storing the transformed word
            string trans;
            //getting each char and converting it according to given transformation
            for(auto ch:c)
            {
                trans+=s[ch-97];
            }
            //pushing it int set
            st.insert(trans);
            
        }
        //returning unique transformations
        return st.size();
    }
};