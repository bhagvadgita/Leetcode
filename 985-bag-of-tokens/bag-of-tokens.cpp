class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int n = tokens.size();
        int score = 0;
        int ans = 0;
        int i = 0;
        int j = n-1;
        while (i<=j){
            if (score<=0){
                if (power>=tokens[i]){
                    power-=tokens[i];
                    i++;
                    score++;
                }
                else{
                    return score;
                }
            }
            else{
                if (power>=tokens[i]){
                    power-=tokens[i];
                    i++;
                    score++;
                }
                else{
                    power+=tokens[j];
                    j--;
                    ans = max(ans,score);
                    score--;
                }
            }
        }
        ans = max(ans,score);
        return ans;
    }
};