class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
          sort(players.begin(),players.end(),greater<int>());
        sort(trainers.begin(),trainers.end(),greater<int>());
        int i=players.size()-1;
        int j=trainers.size()-1;
        int res=0;
        while(i>=0 && j>=0)
        {
            if(players[i]<=trainers[j])
            {
              res++;
              --i;
              --j;
            }
            else{
              j--;

            }

        }
  return res;
        
    }
};