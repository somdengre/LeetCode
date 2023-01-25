class Solution {
public:
    int countGoodSubstrings(string s) {
        int i = 0;
        int count = 0;
        unordered_map<char, int> ump;
        for(int j=0;j<s.size();j++) {
            ump[s[j]]++;
            if(j - i + 1 == 3) {
                if(ump.size() == 3) count++;
                ump[s[i]]--;
                if(ump[s[i]] == 0) ump.erase(s[i]);
                i++;
            }
        }
        return count;
    }
};