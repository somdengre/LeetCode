class Solution {
public:
    int passThePillow(int n, int time) {
        int i = 1;
        int fl = 1;
        while(time){
            if(i == n){
                fl = 0;
            }
            if(i == 1){
                fl = 1;
            }
            
            if(fl == 1){
                i ++;
            }
            else{
                i--;
            }
            time-=1;
        }
        
        return i;
    }
};