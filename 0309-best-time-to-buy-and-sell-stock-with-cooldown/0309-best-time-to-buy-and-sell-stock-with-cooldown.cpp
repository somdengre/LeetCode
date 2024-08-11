class Solution {
public:

    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<int>prev(2,0),prev1(2,0);
        
        
        for(int i = n-1;i>=0;i--){
            vector<int>temp(2,0);
            for(int b = 0;b<=1;b++){
                int profit = 0;
                if(b){
                    profit = max(prev[1],-nums[i]+ prev[0]);
                }else{
                    profit = max(prev[0],nums[i]+prev1[1]);
                    
                }
        
                temp[b] = profit;
            }
            prev1 = prev;
            prev = temp;
        }
        return prev[1];
    }
};