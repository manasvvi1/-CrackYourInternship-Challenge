//  leetcode 20

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        
        for(char a:s){
            if(stk.empty()){
                stk.push(a);
            }
            else if(a=='(' || a=='{' || a=='['){
                stk.push(a);
            }
            else if(a==')' && stk.top()=='('){
                stk.pop();
            }
            else if(a=='}' && stk.top()=='{'){
                stk.pop();
            }
            else if(a==']' && stk.top()=='['){
                stk.pop();
            }
            else{
                return false;
            }
        }
        
        if(!stk.empty()){
            return false;
        }
        
        return true;
    }
};