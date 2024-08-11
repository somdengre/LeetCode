class Solution {
public:
    
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<int>prev(2,0);
        prev[0] = 0;
        prev[1] = 0;
        
        for(int i = n-1;i>=0;i--){
            vector<int>temp(2,0);
            for(int b = 0;b<=1;b++){
                int profit = 0;
                if(b == 1){
                    profit = max(prev[1] ,-nums[i] + prev[0]);
                }else{
                    profit = max(prev[0] ,nums[i]+prev[1]);
                }
        
                temp[b] = profit;
            }
            prev = temp;
        }
        return prev[1];
    }
};