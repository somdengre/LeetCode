class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        int p=num;
        if(p == 0){
            return 0;
        }
        while(p!=0){
            if(p%2 ==0){
                p=p/2;
                count++;
            }
            else{
                p=p-1;
                
                count++;
            }
        }
        return count;
    }
};