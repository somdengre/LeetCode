class Solution {
public:
    int balancedStringSplit(string s) {
      int p=0;
        int ans=0;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='L'){
                p++;
            }else{
                p--;
            }
            
            if(p==0){
                ans++;
            }
        }
        
        return ans;
        
    
    }
};