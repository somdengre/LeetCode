class Solution {
public:
    int mod = 1e9+7;
    long long power(long long x,long long n){
        if(n == 1)return x;
        long long ans = 1.0;
        long long nn = n;
        
        while(nn){
            if(nn %2 == 1){
                ans = ((ans%mod)*(x%mod))%mod;
                nn= nn-1;
            }else{
                x = ((x%mod)*(x%mod))%mod;
                nn/=2;
            }
        }
        return ans%mod;
    }
    int countGoodNumbers(long long n) {
        long long odd = n/2;
        long long even = n/2 + n%2;
        
        return (power(5,even) * power(4,odd)) %mod;
    }
};