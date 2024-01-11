class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
       long long p = x;
        long long s = 0;
        while(p){
            int z = p%10;
            s = s*10+z;
            p = p/10;
        }
        return s == x;
    }
};