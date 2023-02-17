class Solution {
public:
    int mySqrt(int x) {
        
        long long y=0,i=3,cnt=0;
    
        
        while(x>y){
            y+=i;
            i+=2;
            cnt++;
        }

    
    return cnt;
    }
};
