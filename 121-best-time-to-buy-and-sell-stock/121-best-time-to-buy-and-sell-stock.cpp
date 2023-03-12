class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0],profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<buy) buy=prices[i];
            else if((prices[i]-buy) > profit ) profit=prices[i]-buy;
    
        }
        return profit;
    }
};


// int maxProfit(vector<int>& prices) {
        
//         int i=0;
//         int j=1;
//         int buy=0,sell=0,profit=0;
//             while(j<prices.size() and prices[i]>prices[j]) 
//             {
//                 cout<<i<<" j is "<<j<<"\n";
//                 i++;
//                 j++;
//             }
            
//             buy=prices[i];
//             cout<<"buy price "<<buy<<"\n";
            
//             while(j<prices.size())
//             {
//                 buy=min(buy,prices[j]);
//                 int currProfit=(prices[j]-buy);
//                 profit=max(profit,currProfit);
//                 j++;
//             }
//         return profit<0 ? 0 :profit;
//     }