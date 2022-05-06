//  leetcode 121

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, minimum = prices[0];
        
        for(int price:prices){
            minimum = min(minimum,price);
            profit = max(profit,price-minimum);
        }
        return profit;
    }
};