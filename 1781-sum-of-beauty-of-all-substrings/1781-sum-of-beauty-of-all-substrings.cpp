class Solution {
public:
    int solve(unordered_map<char,int>&mp){
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        for(auto it:mp){
            if(it.second<mini){
                mini = it.second;
            }
            
            if(it.second>maxi){
                maxi = it.second;
            }
        }
        
        return maxi-mini;
    }
    int beautySum(string s) {
        int n = s.length();
        
        int ans = 0;
        for(int i = 0;i<n;i++){
            unordered_map<char,int>mp;
            for(int j = i;j<n;j++){
                mp[s[j]]++;
                int p = solve(mp);
                ans+=p;
            }
        }
        
        return ans;
    }
};