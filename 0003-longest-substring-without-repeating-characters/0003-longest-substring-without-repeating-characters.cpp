class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char,int>mp;
        int l = 0,r = 0,maxi = 0;
        
        while(r<n){
            if(mp.find(s[r]) != mp.end()){
                if(mp[s[r]]>=l){
                    l = mp[s[r]]+1;
                }
            }
            int len = r-l+1;
            maxi = max(maxi,len);
            mp[s[r]] = r;
            r++;
        }
        
        return maxi;
    }
};