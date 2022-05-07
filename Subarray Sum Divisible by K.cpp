//  leetcode 974

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum = 0;
        mp.insert(make_pair(0,1));
        int count = 0;
        
        for(int i:nums){
            sum += i;
            int rem = (sum % k + k) % k;
            
            if(mp.find(rem) != mp.end()){
                count += mp[rem];
                mp[rem]++;
            }
            else{
                mp.insert(make_pair(rem,1));
            }
        }
        
        return count;
    }
};