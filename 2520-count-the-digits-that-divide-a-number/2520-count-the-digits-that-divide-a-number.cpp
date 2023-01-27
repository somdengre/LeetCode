class Solution {
public:
    int countDigits(int num) {
        int p=0;
        int count=0;
        int z=num;
        while(num!=0){
            p=num%10;
            num=num/10;
            if(z%p==0){
                count++;
            }
        }
        
        return count;
    }
};