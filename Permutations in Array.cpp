//  https://practice.geeksforgeeks.org/problems/permutations-in-array1747/1/

class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        // Your code goes here
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n/2;i++){
            int temp=b[i];
            b[i]=b[n-1-i];
            b[n-1-i]=temp;
        }
        
        for(int i=0;i<n;i++){
            if(b[i]+a[i]<k){
                return false;
            }
        }
        
        return true;
    }
};