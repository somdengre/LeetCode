class Solution {
public:
    int findTheLongestSubstring(string s) {
        int n = s.length();
        int xr = 0; 
        int maxlen = 0;
        map<int, int> mp;
        mp[0] = -1;  

        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') xr ^= (1 << 0);
            if (s[i] == 'e') xr ^= (1 << 1);
            if (s[i] == 'i') xr ^= (1 << 2);
            if (s[i] == 'o') xr ^= (1 << 3);
            if (s[i] == 'u') xr ^= (1 << 4);

            if (mp.find(xr) != mp.end()) {
                maxlen = max(maxlen, i - mp[xr]);  
            } else {
                mp[xr] = i;  
            }
        }

        return maxlen;
    }
};
