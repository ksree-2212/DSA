class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX; // Start with a very high number
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else {
                int currentProfit = prices[i] - minPrice;
                maxProfit = std::max(maxProfit, currentProfit);
            }
        }        
        return maxProfit;
    }
};