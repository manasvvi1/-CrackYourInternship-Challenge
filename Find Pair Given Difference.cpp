//  https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1/#

bool findPair(int arr[], int size, int n){
    //code
    map<int,int> mp;
    for(int i=0;i<size;i++){
        int comp1=arr[i]+n, comp2=arr[i]-n;
        
        if(mp.find(comp1)!=mp.end() || mp.find(comp2)!=mp.end()){
            return true;
        }
        mp[arr[i]]++;
    }
    
    return false;
}