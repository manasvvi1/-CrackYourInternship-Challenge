//     leetcode 11

class Solution {
public:  
    int maxArea(vector<int>& height) {
        int maxHeight = 0, left = 0, right = height.size()-1;
        
        while(right >= left){
            int curr = (right-left)*min(height[right], height[left]);
            maxHeight = max(maxHeight,curr);
            
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxHeight;
    }
};