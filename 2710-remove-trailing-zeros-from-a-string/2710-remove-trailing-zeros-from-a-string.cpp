class Solution {
public:
    string removeTrailingZeros(string num) {
        int p = 0;
        string r = "";
        for(int i = 0;i<num.length();i++){
            if(num[i] != '0'){
                p = i;
            }
        }
        
        for(int i=0;i<=p;i++){
            r+=num[i];
        }
        
        return r;
        
        
    }
};