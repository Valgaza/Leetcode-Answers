// Problem: Best Time to Buy and Sell Stock
// Straight forward problem, understood the concept of sliding window much better after writing this solution, earlier
// I was misinformed and thought that sliding window was done through a completely different approach.

#include <vector>
#include <algorithm>

class Q121 {
    public:
        int maxProfit(std::vector<int>& prices) {
            if (prices.size() < 2) {
                return 0;
            }
            int minPrice = prices[0];
            int profit = 0;
    
            for (int i = 0; i < prices.size(); i++){
                minPrice = std::min(minPrice, prices[i]);
                profit = std::max(profit, (prices[i] - minPrice));
            }   
            return profit;
        }
    };
    