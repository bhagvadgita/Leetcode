class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int price = 0;
        for (int i = 0; i<prices.size(); i++){
            buy = min(prices[i],buy);
            price = max(price,prices[i]-buy);
        }
        return price;
    }
};