//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


class Solution {
  public:
    long long int nthFibonacci(long long int n){
        long long x=1;
        long long y=1;
        long long ans=-1;
        if(n==1) return 1;
        if(n==2) return 1;
        for(int i=2;i<n;i++)
        {
          ans=((x%1000000007)  + (y%1000000007))%1000000007;
          x=y%1000000007;
          y=ans;
        }
        return ans;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends