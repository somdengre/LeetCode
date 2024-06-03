class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& arr) {
        int n = arr.size();
        vector<int>dp(n,1),hash(n);
        sort(arr.begin(),arr.end());
       int maxi = 1;
       int lastIndex = 0;
       
       for(int i = 0;i<n;i++){
           hash[i] = i;
           for(int prev = 0;prev<i;prev++){
               if(arr[i]%arr[prev] == 0 && 1 + dp[prev] > dp[i] ){
                   dp[i] = 1 + dp[prev];
                   hash[i] = prev;
               }
           }
           if(dp[i] > maxi){
               maxi = dp[i];
               lastIndex = i;
           }
       }
       vector<int>lis;
       lis.push_back(arr[lastIndex]);
       int ind = 1;
       while(hash[lastIndex]!=lastIndex){
           lastIndex = hash[lastIndex];
           lis.push_back(arr[lastIndex]);
       }
       reverse(lis.begin(),lis.end());
       return lis;
    }
};