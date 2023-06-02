class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int j=0;
        
        int ans = 0;
        
        // if(s==""||s==" "){
        //     return 0;
        // }
        int var = 0;
        for(int i=j;i<s.length();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]];
                var = i-j+1;
                ans = max(ans,var);
            }
            else{
                var = i-j;
                ans = max(ans,var);
                while(s[j]!=s[i]){
                    mp.erase(s[j]);
                    j++;
                }
                j++;
                ans = max(ans,var);
                
            }
            
        }
        
        return ans;
    }
};