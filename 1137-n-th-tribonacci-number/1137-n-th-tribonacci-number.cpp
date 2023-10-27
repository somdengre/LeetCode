class Solution {
public:
    int tribonacci(int n) {
        int t0 = 0;
        int t1 = 1;
        int t2 = 1;
        if(n == 0)return 0;
        if(n == 1 )return 1;
        for(int i = 3;i<=n;i++){
            int dp = t1+t2+t0;
            t0 = t1;
            t1 = t2;
            t2 = dp;
            
        }
        
        return t2;
    }
};