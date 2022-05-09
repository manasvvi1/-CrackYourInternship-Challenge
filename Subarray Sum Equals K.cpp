//  leetcode 560

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans = 0, sum = 0;
        mp[sum]++;
        
        for(int i:nums){
            sum += i;            
            if(mp.find(sum-k) != mp.end()){
                ans += mp[sum-k];
            }
            mp[sum]++;
        }
        
        return ans;
    }
};