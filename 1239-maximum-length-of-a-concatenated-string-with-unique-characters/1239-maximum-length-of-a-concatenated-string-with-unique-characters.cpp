class Solution {
public:
    
    int maxi = 0;
    
    // function for checking uniqueness of the string
    
    bool is_unique(string& str)
    {
        int n = str.size();
        
        // mp will store the count of all the characters in string
        
        vector<int> mp(26, 0);
        
        for(int i = 0; i < n; i++)
        {
            mp[str[i] - 'a']++;
            
            // if we found duplicates return false
            
            if(mp[str[i] - 'a'] > 1)
                return false;
        }
        
        return true;
    }
    
    void helper(vector<string>& arr, int i, int n, string curr)
    {
        // if we have got duplicate int our result then simply return
        
        if(is_unique(curr) == false)
            return;
        
        // base case
        
        if(i == n)
        {
            // update maxi
            
            if(curr.size() > maxi)
            {
                int size = curr.size();
                
                maxi = max(maxi, size);
            }
            
            return;
        }
        
        // we have two options either include the curr string or exclude
        
        // include the curr string
        
        helper(arr, i + 1, n, curr + arr[i]);
        
        // exclude the curr string
        
        helper(arr, i + 1, n, curr);
    }
    
    int maxLength(vector<string>& arr) {
        
        int n = arr.size();
        
        // call helper function
        
        helper(arr, 0, n, "");
        
        return maxi;
    }
};
