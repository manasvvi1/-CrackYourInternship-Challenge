//  https://leetcode.com/problems/implement-strstr/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() == 0) {
            return 0;
        }
            
        int length = needle.length();
        for(int i = 0; i <= haystack.length() - length; i++) {
            if (haystack[i] == needle[0] && haystack.substr(i, length) == needle) {
                    return i;
            }
        }
        
        return -1;
    }
};