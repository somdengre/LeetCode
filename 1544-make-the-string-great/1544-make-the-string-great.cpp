class Solution {
public:
    string makeGood(string s) {
        string sb = s;
        int flag = 0;
        
        while(flag == 0 && sb.length() >0){
            flag = 1;
            
            for(int i = 0;i<sb.length()-1;i++){
                if(abs(sb[i]-sb[i+1]) == 32){
                    sb.erase(i,2);
                    flag = 0;
                    break;
                }
            }
        }
        
        return sb;
    }
};