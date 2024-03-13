class Solution {
public:
    int pivotInteger(int n) {
        int sum = 0;
        
        for(int i = 1;i<=n;i++){
            sum+=i;
        }
        int pre = 0;
        for(int i = 1;i<=n;i++){
            pre+=i;
            if(sum-pre+i == pre){
                return i;
            }
        }
        
        return -1;
    }
};