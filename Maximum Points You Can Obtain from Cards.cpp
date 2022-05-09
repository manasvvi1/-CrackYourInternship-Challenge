//  leetcode 1423

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        if(cardPoints.size() <= k){
            int sum = 0;
            for(int &i:cardPoints)
                sum+=i;
            return sum;
        }
        
        int windowS = k, windowE = cardPoints.size()-1;
        int maxScore = 0, prev = 0;
        
        for(int i = 0 ; i < windowS ; i++){
            prev += cardPoints[i];
        }
        maxScore = prev;
        
        while(windowS > 0){
            int newScore = prev - cardPoints[--windowS] + cardPoints[windowE--];
            maxScore = max(maxScore, newScore);
            prev = newScore;
        }
        
        return maxScore;
    }
};