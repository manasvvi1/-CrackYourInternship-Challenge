//  https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        
        int minimum = a[m-1]-a[0];
        
        for(int i=m;i<a.size();i++){
            int window = a[i]-a[i-m+1];
            minimum = min(minimum,window);
        }
        
        return minimum;
    }   
};