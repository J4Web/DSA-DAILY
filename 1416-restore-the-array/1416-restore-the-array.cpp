class Solution {
public:
    int MOD = 1000000007;
    int numberOfArrays(string s, int k) 
    {
        int n = s.size();
        vector<int>dp(n + 1, 0);
        //In top down 
        //1) For string starting from startIdx
        //   we needed answers of strings starting from [startIdx+1, startIdx+2, ....]
        //2) Recursion did that for us
        
        //In bottom up
        //1) We need to pre-calculate the desired results first
        //2) So we will go from startIdx = n - 1 to startIdx = 0
        //3) Now for startIdx = x, we would already have answers stored for 
        //           startIdx = [x+1, x+2, x+3......]
        
        dp[n] = 1; //base case implemented here
        for (int startIdx = n - 1; startIdx >= 0; startIdx--)
        {
            long long currNum = 0, ways = 0;
            //=================================================
            for (int i = startIdx; i < s.size(); i++)
            {
                int currDig = s[i] - '0';
                currNum = (currNum * 10) + currDig; //building the number from L->R

                if (currNum < 1 || currNum > k) break;
                int nextWays = dp[i + 1]; 
                ways = (ways +  nextWays) % MOD;
            }
            //====================================================
            dp[startIdx] = ways;
        }
        return dp[0];
    }
};