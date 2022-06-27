//  https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        int top=0;
        char topChar = s[0];
        
        for(int i=1;i<s.length();i++){
            if(s[i]==')' && topChar=='('){
                top--;
                topChar.clear();
            }
            else if(s[i]=='}' && topChar=='{'){
                top--;
                topChar = '';
            }
            else if(s[i]==']' && topChar=='['){
                top--;
                topChar = '';
            }
            else{
                top++;
                topChar = s[i];
            }
        }
                    
        if(top==-1){
            return true;
        }
        return false;
    }
};