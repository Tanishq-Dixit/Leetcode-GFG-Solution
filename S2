class Solution {
public:
    int maxProfit(vector<int>& prices) {
          int min_price = INT_MAX;  // Initialize min_price to a large value
        int max_profit = 0;       // Initialize max_profit to 0
        
        // Iterate through the prices
        for (int price : prices) {
            // Update the min_price if the current price is lower
            if (price < min_price) {
                min_price = price;
            }
            
            // Calculate the profit by selling at the current price
            int profit = price - min_price;
            
            // Update the max_profit if the current profit is larger
            if (profit > max_profit) {
                max_profit = profit;
            }
        }
        
        return max_profit;
    
        
    }
};
