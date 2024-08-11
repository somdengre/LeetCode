class Solution {
public:
 
    int maxProfit(int t, vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>prev(2,vector<int>(t+1,0));;
        
        for(int i = n-1;i>=0;i--){
            vector<vector<int>>temp(2,vector<int>(t+1,0));
            for(int b = 0;b<=1;b++){
                for(int k = 1;k<=t;k++){
                    int profit = 0;
                    if(b){
                        profit = max(prev[1][k] , -nums[i] + prev[0][k]);
                    }else{
                        profit = max(prev[0][k] , nums[i] +prev[1][k-1]);
                    }
        
                    temp[b][k] =  profit;
                }
            }
            prev = temp;
        }
        return prev[1][t];
    }
};