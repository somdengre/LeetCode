class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map <char,int> mp;
        char ans;
        for(int i=0;i<s.length();i++){
            
            if(mp[s[i]] ==1){
                return s[i];
            }
            else{
                mp[s[i]]++;
            }
        }
        
        return 'a';
        
        
    }
};

