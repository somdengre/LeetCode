class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        int n = s.length();
        int m = t.length();
        int l =0,r=0,cnt=0,mini = 1e9,starti = -1;
        string ans = "";
        for(int i = 0;i<m;i++){
            mp[t[i]]++;
        }
        while(r<n){
            if(mp[s[r]] > 0)cnt++;
            mp[s[r]]--;
            
            while(cnt == m){
                if(r-l+1 < mini){
                    starti = l;
                    mini = r-l+1;
                }
                mp[s[l]]++;
                if(mp[s[l]] >0)cnt--;
                l++;
            }
            
            r++;
        }
        
        if(starti == -1)return "";
        for(int i = starti;i<starti+mini;i++){
            ans+=s[i];
        }
        
        return ans;
    }
};