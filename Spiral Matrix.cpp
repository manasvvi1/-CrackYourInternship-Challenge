//  leetcode 54

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int hEnd = matrix[0].size()-1, hStart = 0, vEnd = matrix.size()-1, vStart = 0;
        
        bool moveRight = true, moveLeft = false, moveDown = false, moveUp = false;
        
        vector<int> ans;
        
        while(vStart<=vEnd && hStart<=hEnd){            
            if(moveRight){
                for(int j = hStart ; j <= hEnd ; j++){
                    ans.push_back(matrix[vStart][j]);
                }
                vStart++;
                moveRight = false;
                moveDown = true;
            }
            else if(moveDown){
                for(int i = vStart ; i <= vEnd ; i++){
                    ans.push_back(matrix[i][hEnd]);
                }
                hEnd--;
                moveDown = false;
                moveLeft = true;
            }
            else if(moveLeft){
                for(int i = hEnd ; i >= hStart ; i--){
                    ans.push_back(matrix[vEnd][i]);
                }
                vEnd--;
                moveLeft = false;
                moveUp = true;
            }
            else{
                for(int i = vEnd ; i >= vStart ; i--){
                    ans.push_back(matrix[i][hStart]);
                }
                hStart++;
                moveUp = false;
                moveRight = true;
            }
        }
        
        return ans;
    }
};