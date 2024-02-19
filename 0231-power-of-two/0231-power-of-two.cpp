class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1){
            return true;
        }
        if(n<=0){
            return false;
        }
        long long int p = 1;
        for(int i = 1;i<32;i++){
            p=p*2;
            if(p == n){
                return true;
            }
        }
        return false;
    }
};