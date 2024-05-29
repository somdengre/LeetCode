class Solution {
public:
    int numSteps(string s) {
        int c = 0;
        int p = 0;
        for(int i = s.length()-1;i>0;i--){
            int digit = s[i]-0+c;
            
            if(digit %2 == 0){
                p++;
            }else{
                c=1;
                p+=2;
            }
        }
        
        return p+c;
    }
};