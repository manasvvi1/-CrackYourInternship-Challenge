//  https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        
        for(int i = 0 ; i < strs.size() ; i++){
            if(strs[i].find(s) != 0){
                s = s.substr(0,s.length()-1);
                i--;
            }
        }
        
        return s;
    }
};