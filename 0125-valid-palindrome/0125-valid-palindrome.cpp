

class Solution {
public:
    bool isPalindrome(string s) {
        string nString;
        
        for(auto a:s){
            if(('a' <= a && 'z' >= a) or ('0' <= a && '9' >= a)){
                nString += a;
            }else if('A' <= a && 'Z' >= a){
                nString += a-'A'+'a';
            }
        }
        
        int i= 0, j = nString.size()-1;
        while(i<j){
            if(nString[i] != nString[j])return false;
            i++,j--;
        }
        return true;
    }
};