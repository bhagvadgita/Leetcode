class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0;
        long long count = 0;
        sort(happiness.begin(),happiness.end());
        for (int i = 1; i<=k; i++){
            if (happiness[happiness.size()-1]-count<=0){
                break;
            }
            ans+= happiness[happiness.size()-1]-count;
            count++;
            happiness.pop_back();
        }
        return ans;
    }
};