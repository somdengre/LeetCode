class Solution {
public:
    int subtractProductAndSum(int n) {
        int t=n,sum=0,pro=1;
        while(t>0){
            sum=sum+t%10;
            pro=pro*(t%10);
            t=t/10;
        }
        return pro-sum;
    }
};