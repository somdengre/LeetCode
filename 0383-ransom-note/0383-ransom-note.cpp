class Solution {
public:
    bool canConstruct(string r, string m) {
        map<char,int> mp1;
        map<char,int> mp2;
        
        for(int i=0;i<m.length();i++ ){
            mp1[m[i]]++;
            
        }
        
        for(int j=0;j< r.length();j++){
            mp2[r[j]]++;
        }
        
        for(auto x:mp2){
            if(x.second <= mp1[x.first]){
                continue;
            }
            
            return false;
        }
        
            return true;
    }
};