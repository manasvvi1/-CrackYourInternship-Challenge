//  leetcode 75

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;     //number of 0,1,2 resp
        
        for(int i:nums){
            if(i==0) zero++;
            else if(i==1) one++;
            else two++;
        }
        
        int i=0;
        while(zero--){
            nums[i++] = 0;
        }
        
        while(one--){
            nums[i++] = 1;
        }
        
        while(two--){
            nums[i++] = 2;
        }
    }
};