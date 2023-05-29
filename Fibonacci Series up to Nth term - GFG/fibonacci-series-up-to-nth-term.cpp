//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> Series(int n) {
        // creating a vector for returning to the function
        vector<long long> v;
        //store values in vector
        v.push_back(0);
        v.push_back(1);
        for(int i=2; i<=n; i++){ 
            v.push_back(v.at(i-1)+v.at(i-2));
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<long long> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends