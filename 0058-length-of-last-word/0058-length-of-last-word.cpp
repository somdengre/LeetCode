class Solution {
public:
    int lengthOfLastWord(string s) {
        int b = 0;
        int a = 0;
        for(int i = s.length()-1;i>=0;i--){
            
            if(s[i] == ' '){
                if(b == 1){
                    break;
                }else{
                    continue;
                }
            }else{
                b = 1;
                a++;
                
            }
        }
        
        return a;
    }
};