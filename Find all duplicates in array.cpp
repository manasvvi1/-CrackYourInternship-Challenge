//  https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    int abs(int a){
        return a>0?a:-a;
    }
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i])-1;
            if(nums[index]<0) ans.push_back(index+1);
            nums[index]*=-1;
        }
        
        return ans;
    }
};