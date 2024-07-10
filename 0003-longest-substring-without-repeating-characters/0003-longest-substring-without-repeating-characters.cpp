class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int n = s.length();
        int i = 0,j = 0,maxi = 0,c = 0;
        
        while(i<n){
            if(j<n && mp.find(s[j]) == mp.end()){
                mp[s[j]] = 1;
                c++;
                maxi = max(maxi,c);
            }else{
                c = 1;
                i = i+1;
                j = i;
                mp.clear();
                mp[s[j]] = 1;
            }
            j++;
            if(j>=n){
                mp.clear();
                c = 1;
                i++;
                if(i<n)j = i;
                if(j<n)mp[s[j]] = 1;
            }
        }
        
        return maxi;
    }
};