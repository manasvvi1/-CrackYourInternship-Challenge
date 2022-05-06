//  leetcode 73

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> index;
        
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[i].size() ; j++){
                if(matrix[i][j]==0){
                    pair<int, int> p;
                    p.first = i;
                    p.second = j;
                    index.push_back(p);
                }
            }
        }
        
        for(auto i:index){
            for(int j = 0 ; j < matrix.size() ; j++){
                matrix[j][i.second] = 0;
            }
            
            for(int j = 0 ; j < matrix[i.first].size() ; j++){
                matrix[i.first][j] = 0;
            }
        }
    }
};