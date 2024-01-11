class Solution {
public:
    int reverse(int x) {
        long long s = 0;
        while(x){
            s = s*10 + x%10;
            x = x/10;
        }
        
         if(s>INT_MAX || s<INT_MIN) return 0;
        return s;
    }
};