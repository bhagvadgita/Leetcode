class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0],profit = INT_MIN;
        for (int i = 0; i<prices.size(); i++){
            mini = min(mini,prices[i]);
            profit = max(prices[i]-mini,profit);
        }
        return profit>0?profit:0;
    }
};