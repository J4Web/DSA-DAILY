class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string res1="";
        string res2="";
        for(auto i:word1){
            res1+=i;
        }     
        for(auto i:word2){
            res2+=i;
        }
        
        // sort(res1.begin(),res1.end());
        // sort(res2.begin(),res2.end());
        cout<<res1<<" "<<res2<<"\n";
        if(res1!=res2) return false;
        return true;
    }
};