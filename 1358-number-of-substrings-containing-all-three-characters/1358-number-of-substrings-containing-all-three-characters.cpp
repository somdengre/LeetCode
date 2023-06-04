class Solution {
public:
    int numberOfSubstrings(string s) {
        int j=0;
        int i=0;
        int end  = s.size()-1;
        
        unordered_map<char,int> mp;
        
        int count = 0;
        
        while(j!=s.size()){
            mp[s[j]]++;
            
            while(mp['a'] && mp['b'] && mp['c']){
                count += 1+ (end-j);
                
                mp[s[i]]--;
                i++;
            }
            
            j++;
            
        }
        return count;
    }
};