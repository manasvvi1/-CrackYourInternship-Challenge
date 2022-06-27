//  https://leetcode.com/problems/integer-to-roman/

class Solution {
public:
    string intToRoman(int num) {
        string ans;
        
        if(num/1000!=0){
            int quo=num/1000;
            while(quo--){
                ans+='M';
            }
            num=num%1000;
        }
        
        if(num/100!=0){
            int quo=num/100;
            if(quo<4){
                while(quo--){
                    ans+='C';
                }
            }
            else if(quo==4){
                ans+="CD";
            }
            else if(quo==9){
                ans+="CM";
            }
            else{
                quo-=5;
                ans+='D';
                while(quo--){
                    ans+='C';
                }
            }
            num%=100;
        }
        
        if(num/10!=0){
            int quo=num/10;
            if(quo<4){
                while(quo--){
                    ans+='X';
                }
            }
            else if(quo==4){
                ans+="XL";
            }
            else if(quo==9){
                ans+="XC";
            }
            else{
                quo-=5;
                ans+='L';
                while(quo--){
                    ans+='X';
                }
            }
            num%=10;
        }
        
        if(num!=0){
            int quo=num;
            if(quo<4){
                while(quo--){
                    ans+='I';
                }
            }
            else if(quo==4){
                ans+="IV";
            }
            else if(quo==9){
                ans+="IX";
            }
            else{
                quo-=5;
                ans+='V';
                while(quo--){
                    ans+='I';
                }
            }
        }
        
        return ans;
    }
};