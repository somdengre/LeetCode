
    
   

class Solution {
public:
     
    bool isPowerOfFour(int n) {
	    if(n<=0)return false;
        
        while(n){
            int r = n%4;
            if(n == 1)return true;
            if(r!=0)return false;
            n = n/4;
        }
        return true;
		
    }
};