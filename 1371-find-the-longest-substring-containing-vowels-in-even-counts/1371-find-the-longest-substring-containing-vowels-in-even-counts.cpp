class Solution {
public:
    int findTheLongestSubstring(string s) {
        int n = s.length();
        int xr = 0;  // XOR value to track the state of vowels
        int maxlen = 0;
        map<int, int> mp;  // To store first occurrence of each XOR state
        mp[0] = -1;  // Initialize to handle cases where the valid substring starts from index 0

        for (int i = 0; i < n; i++) {
            // Toggle bits for vowels
            if (s[i] == 'a') xr ^= (1 << 0);
            if (s[i] == 'e') xr ^= (1 << 1);
            if (s[i] == 'i') xr ^= (1 << 2);
            if (s[i] == 'o') xr ^= (1 << 3);
            if (s[i] == 'u') xr ^= (1 << 4);

            // Check if this XOR state has been seen before
            if (mp.find(xr) != mp.end()) {
                maxlen = max(maxlen, i - mp[xr]);  // Correct calculation without +1
            } else {
                mp[xr] = i;  // Store the first occurrence of this XOR state
            }
        }

        return maxlen;
    }
};
