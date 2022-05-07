//  leetcode 1

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, vector<int>> mp;
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(mp.find(nums[i]) != mp.end()){
                mp[nums[i]].push_back(i);
            }
            else{
                vector<int> n;
                n.push_back(i);
                mp.insert(make_pair(nums[i],n));
            }
        }
        
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            int complement = target - nums[i];
            
            if(mp.find(complement) != mp.end()){
                if(complement == nums[i]){
                    if(mp[complement].size() >= 2){
                        ans.push_back(mp[complement][0]);
                        ans.push_back(mp[complement][1]);
                        return ans;   
                    }
                }
                else{
                    ans.push_back(mp[nums[i]][0]);
                    ans.push_back(mp[complement][0]);
                    return ans;
                }
            }
        }
        
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};