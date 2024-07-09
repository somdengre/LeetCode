class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int ans = 0;
        int n = s.length();
        
        for(int i =0;i<n;i++){
            unordered_map<char,int>mp;
            int c = 0;
            for(int j = i;j<n;j++){
                if(mp.find(s[j]) == mp.end()){
                    mp[s[j]] = 1;
                    c++;
                }else{
                    ans = max(ans,c);
                    break;
                }
            }
            ans = max(ans,c);
        }
        
        return ans;
    }
};