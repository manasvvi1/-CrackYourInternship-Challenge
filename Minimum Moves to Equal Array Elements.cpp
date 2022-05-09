//  leetcode 453

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int total = 0;
        int mini = nums[0];
        
        for(int i:nums){
            mini = min(mini,i);
        }
        
        for(int i:nums){
            total += i-mini;
        }
        
        return total;
    }
};