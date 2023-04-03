class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums){
        //result vector
        vector<vector<int>> arr;
        //map to keep track of frequency 
        unordered_map<int,int> mp;
        //counting frequency 
        for(auto i:nums) mp[i]++;
        //filling up the arr vector until the map becomes empty    
        while(mp.size()>0)
        {
            vector<int> res;
            vector<int> key_to_del;
            for(auto& [key, count]: mp)
            {
                res.push_back(key);
                count--;
                if(count==0) key_to_del.push_back(key);
            }
            for(auto i:key_to_del) mp.erase(i);
            arr.push_back(res);
        }

        return arr;
    }
};
