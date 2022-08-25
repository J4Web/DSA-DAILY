class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>> bmap;
        vector<vector<string>> res;
        int  n=strs.size();
        for(auto i:strs)
        {
            //freq map for each element
            map<char,int> mp;
            string str=i;
            //finding freq
            for(auto j:str)
            {
                mp[j]++;
            }
            //checking if such freq map is there in our map already or not
            //if present then eh we take out the vector and push in the same thing if not then we create one
            // and create its freq vector mapping
            if(bmap.find(mp)==bmap.end())
            {
                vector<string> newVec;
                newVec.push_back(i);
                bmap.insert({mp,newVec});
            }
            else{
                vector<string> prev=bmap[mp];
                prev.push_back(str);
                bmap[mp]=prev;
            }
        }
        for(auto i:bmap)
        {
            res.push_back(i.second);
        }
        return res;
    }
};