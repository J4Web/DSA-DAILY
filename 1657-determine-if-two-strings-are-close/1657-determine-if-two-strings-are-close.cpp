class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()>word2.size()) return false;
          unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(auto i:word1)
        {
            mp1[i]++;
        }
        for(auto i:word2)
        {
            mp2[i]++;
        }
        vector<int> arr1;
        vector<int> arr2;
        for(auto i:mp1)
        {
            arr1.push_back(i.second);
        }      
        for(auto i:mp2)
        {
            arr2.push_back(i.second);
        }
        sort(begin(arr1),end(arr1));
        sort(begin(arr2),end(arr2));
        for(auto i:arr1) cout<<i<<" ";
        cout<<"\n";
        for(auto i:arr2) cout<<i<<" ";

        int i=0;
        while(i<arr1.size())
        {
            if(arr1[i]!=arr2[i]) return false;
            i++;
        }
        for(auto i:mp1)
        {
            if(!(mp2.count(i.first))) return false;
        }
        return true;
    }
};
