class Solution {
public:
    bool compare(string &s1, string &s2){
        if(s1.size() != s2.size() + 1) return 0;
        int first = 0, second = 0;
        while(first < s1.size()){
            if(s1[first] == s2[second]){
                first++;
                second++;
            }
            else first++;
        }
        if(first == s1.size() && second == s2.size()) return 1;
        return 0;
    }
    static bool comp(string &s1, string &s2){
        return s1.size() < s2.size();
    }
    
    int longestStrChain(vector<string>& words) {
        int n = words.size(), mx_len = 0;
        sort(words.begin(), words.end(), comp);
        vector<int> dp(n, 1);
        for(int curr_idx = 0; curr_idx < n; curr_idx++){
            for(int prev_idx = 0; prev_idx <= curr_idx - 1; prev_idx++){
                if(compare(words[curr_idx], words[prev_idx]) && 1 + dp[prev_idx] > dp[curr_idx]){
                    dp[curr_idx] = 1 + dp[prev_idx];
                }
            }
            mx_len = max(mx_len, dp[curr_idx]);
        }
        return mx_len;
    }
};