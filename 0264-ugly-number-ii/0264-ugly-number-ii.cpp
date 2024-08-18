class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>ans(n+1);
        ans[1] = 1;
        int i2 = 1,i3=1,i5 = 1;
        
        for(int i = 2;i<=n;i++){
            int num1 = ans[i2]*2;
            int num2 = ans[i3]*3;
            int num3 = ans[i5]*5;
            int mini = min({num1,num2,num3});
            
            if(mini == num1)i2++;
            if(mini == num2)i3++;
            if(mini == num3)i5++;
            ans[i] = mini;
        }
        return ans[n];
    }
};