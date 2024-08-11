class Solution {
public:
    
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>prev(2,vector<int>(3,0));
        
        
        for(int i = n-1;i>=0;i--){
            vector<vector<int>>temp(2,vector<int>(3,0));
            for(int b = 0;b<=1;b++){
                for(int t = 1;t<=2;t++){
                    int profit = 0;
                    if(b){
                        profit = max(prev[1][t] ,-nums[i] + prev[0][t]);
                    }else{
                        profit = max(prev[0][t] ,nums[i]+prev[1][t-1]);
                    }
        
                    temp[b][t] = profit;
                }
            }
            prev = temp;
        }
        return prev[1][2];
    }
};