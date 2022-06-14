//  https://leetcode.com/problems/word-search/

class Solution {
public:
    bool checkExist(vector<vector<char>>& board, string word, int ind, int i, int j, string curr){
        if(word==curr){
            return true;
        }
        
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size()){
            return false;
        }
        
        if(word[ind]!=board[i][j]){
            return false;
        }
        
        board[i][j]='.';
        bool ans=checkExist(board,word,ind+1,i+1,j,curr+word[ind])||checkExist(board,word,ind+1,i-1,j,curr+word[ind])||checkExist(board,word,ind+1,i,j+1,curr+word[ind])||checkExist(board,word,ind+1,i,j-1,curr+word[ind]);
        
        
        board[i][j]=word[ind];
        return ans;        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    if(checkExist(board,word,0,i,j,"")){
                        return true;
                    }
                    
                }
            }
        }
        
        return false;
    }
};