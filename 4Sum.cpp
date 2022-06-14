//  https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int left=j+1, right = nums.size()-1;
                
                while(left<right){
                    long sum = (long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum == target){
                        vector<int> v={nums[i],nums[j],nums[left],nums[right]};
                        ans.push_back(v);
                        for(int a=0;a<ans.size()-1;a++){
                            if(ans[a]==v){
                                ans.erase(ans.end()-1);
                                break;
                            }
                        }
                        left++;
                        right--;
                    }
                    else if(sum > target){
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