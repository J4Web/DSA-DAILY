class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums){
        vector<vector<int>> arr;
        unordered_map<int,int> mp;
        for(auto i:nums) mp[i]++;
            
        vector<int> key_to_del;
        
       while(mp.size()>0)
        {
            vector<int> res;
            for(auto it=mp.begin();it!=mp.end();++it)
            {

                    res.push_back(it->first);
                    mp[it->first]--;
                   if(mp[it->first]==0) key_to_del.push_back(it->first);

            }
           for(auto i:key_to_del)
           {
               mp.erase(i);
           }
            arr.push_back(res);
        }

        return arr;
    }
};