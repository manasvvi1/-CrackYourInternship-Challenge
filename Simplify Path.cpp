//  https://leetcode.com/problems/simplify-path/

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> stk;
        string s;
        
        for(int i=0;i<=path.length();i++){
            if(path[i]=='/' || i==path.length()){
                if(s==".."){
                    if(!stk.empty()) stk.pop();
                    s="";
                }
                else if(s=="."){
                    s="";
                }
                
                if(s.length()!=0) stk.push(s);
                s="";
            }
            else{
                s+=path[i];
            }
        }
        
        stack<string> rev;
        while(!stk.empty()){
            rev.push(stk.top());
            stk.pop();
        }
        
        string ans="/";
        
        while(!rev.empty()){
            ans+=rev.top()+"/";
            rev.pop();
        }
        
        if(ans.length()>1) ans=ans.substr(0,ans.length()-1);
        return ans;
    }
};