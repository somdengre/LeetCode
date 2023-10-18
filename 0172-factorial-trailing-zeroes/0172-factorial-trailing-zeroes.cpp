class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        
        while(n){
            int r = n/5;
            n = n/5;
            if(r!=0){
                ans+=r;
            }
        }
        
        return ans;
        
    }
};