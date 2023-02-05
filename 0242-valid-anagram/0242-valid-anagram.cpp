class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <int, int> mp1,mp2;
        if(s.length()!= t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
        }
        
        for(int i=0;i<s.length();i++){
            mp2[t[i]]++;
        }
        
        if(mp1==mp2){
            return true;
        }
        
        return false;
    }
};