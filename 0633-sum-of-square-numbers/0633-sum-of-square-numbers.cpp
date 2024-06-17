class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c == 0)return true;
        long long l = 1,r = c;
        long long ans = -1;
        
        while(l<=r){
            long long mid = (l+r)/2;
            long long pro = mid*mid;
            
            if(pro == c){
                return true;
            }else if(pro>c ){
                r = mid-1;
            }else{
                ans = mid;
                l = mid+1;
            }
        }
        
        l = 0;
        r = ans;
        
        while(l<=r){
            long long pro = l*l+r*r;
            if(pro == c){
                return true;
            }else if(pro>c){
                r--;
            }else{
                l++;
            }
        }
        
        return false;
        
        
    }
};