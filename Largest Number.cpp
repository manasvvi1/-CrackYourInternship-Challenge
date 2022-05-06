//  leetcode 179

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        
        for(int i:nums){
            str.push_back(to_string(i));
        }
        
        int n=str.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                bool iGreater = false, jGreater = false;
                int indexI = 0, indexJ = 0;
                string a=str[i], b=str[j];
                
                while(!iGreater && !jGreater){
                    if(a[indexI]>b[indexJ]){
                        iGreater = true;
                    }
                    else if(a[indexI]<b[indexJ]){
                        jGreater = true;
                    }
                    else{
                        indexI++;
                        indexJ++;
                        
                        if(indexI==a.length() && indexJ==b.length()){
                            break;
                        }
                        else if(indexI==a.length()){
                            indexI = 0;
                        }
                        else if(indexJ==b.length()){
                            indexJ = 0;
                        }
                    }
                }
                
                if(jGreater){
                    string temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
        
        string ans;
        for(string s:str){
            ans+=s;
        }
        
        for(int i = 0 ; i < ans.length() ; i++){
            if(ans.length() == 1 || ans[i]!='0'){
                break;
            }
            else{
                ans.erase(i,i+1);
                i--;
            }
        }
        return ans;
    }
};