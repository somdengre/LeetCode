class Solution {
public:
    int pq(int n){
        if(n==0||n==1){
            return n;
        }else{
            return pq(n-1)+pq(n-2);        
        }
    }
    int fib(int n) {
        
        int ans = pq(n);
        return ans;
        
        
        
    }
};