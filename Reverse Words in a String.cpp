//  https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;
        string temp;
        
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(temp!="") stk.push(temp);
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        
        if(temp!="") stk.push(temp);
        string ans=stk.top();
        stk.pop();
        while(!stk.empty()){
            ans+=" "+stk.top();
            stk.pop();
        }
        
        return ans;
    }
};