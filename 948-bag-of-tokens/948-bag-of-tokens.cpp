class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int score = 0;
        int i = 0, j = tokens.size()-1;
        int n = tokens.size();
        while(i<=j){
            while(i<=j && tokens[i]<=power){
                score++;
                power -= tokens[i];
                i++;
            }
            if(i>=j || score<=0) break;
            score -= 1;
            power += tokens[j];
            j--;
            
        }
        return score;
    }
};