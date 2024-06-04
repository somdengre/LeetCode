class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        int maxi = 0;
        int ans = 0;
        bool odd = false;
        for(int i =0;i<s.length();i++){
            mp[s[i]]++;
        }
        
        for(auto it: mp){
            if(it.second %2 == 0){
                ans+=it.second;
            }else{
                ans+=it.second-1;
                odd = true;
            }
        }
        if(odd){
            ans+=1;
        }
        ans+=maxi;
        return ans;
    }
};