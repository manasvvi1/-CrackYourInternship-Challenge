//  leetcode 15

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        
        sort(nums.begin(),nums.end());
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(i == 0 || nums[i]!=nums[i-1]){
                int left = i+1, right = nums.size()-1;
                
                while(left < right){
                    if(nums[i]+nums[left]+nums[right] == 0){
                        vector<int> v={nums[i],nums[left],nums[right]};
                        if(ans.size()==0){
                            ans.push_back(v);
                        }
                        else if(ans[ans.size()-1]!=v){
                            ans.push_back(v);
                        }
                        left++;
                        right--;
                    }
                    else if(nums[i]+nums[left]+nums[right] > 0){
                        right--;
                    }
                    else{
                        left++;
                    }
                }
            }
        }
        
        return ans;
    }
};