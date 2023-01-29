class Solution {
public:
    bool isPowerOfTwo(int n) {
        int p=0;
        if(n==0||n<0){
            return false;
        }
        while(n!=0){
            if(n==1){
            return true;
        }
           p=n%2;
            n=n/2;
            if(p==1){
                return false;
            }
        }
        
        return true;
    }
};