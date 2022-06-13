//  https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0, minVal=prices[0];
        
        for(int p:prices){
            int profit = p-minVal;
            if(profit>0){
                maxP += profit;
            }
            minVal = p;
        }
        
        return maxP;
    }
};