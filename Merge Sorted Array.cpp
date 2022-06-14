//  https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int top1=0,top2=0;
        vector<int> nums;
        
        for(int i=0;i<m+n;i++){
            if(top1>=m){
                nums.push_back(nums2[top2]);
                top2++;
            }
            else if(top2>=n){
                nums.push_back(nums1[top1]);
                top1++;
            }
            else if(nums1[top1]>nums2[top2]){
                nums.push_back(nums2[top2]);
                top2++;
            }
            else{
                nums.push_back(nums1[top1]);
                top1++;
            }
        }
        
        for(int i=0;i<m+n;i++){
            nums1[i]=nums[i];
        }
    }
};