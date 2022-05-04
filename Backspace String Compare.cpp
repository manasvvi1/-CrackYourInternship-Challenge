//  https://leetcode.com/problems/backspace-string-compare/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stkS, stkT;
        
        for(char a:s){
            if(a == '#'){
                if(!stkS.empty()){
                    stkS.pop();
                }
            }
            else{
                stkS.push(a);
            }
        }
        
        for(char a:t){
            if(a == '#'){
                if(!stkT.empty()){
                    stkT.pop();
                }
            }
            else{
                stkT.push(a);
            }
        }
        
        while(!stkS.empty() && !stkT.empty()){
            char a = stkS.top(), b = stkT.top();
            stkS.pop();
            stkT.pop();
            
            if(a!=b){
                return false;
            }
        }
        
        if(!stkS.empty() || !stkT.empty()){
            return false;
        }
        
        return true;
    }
};