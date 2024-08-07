class Solution {
public:
    int f(vector<int>nums){
        int n = nums.size();
        vector<int>dp(n,0);
        int prev = nums[0];
        int prev2 = 0;
        for(int i = 1;i<n;i++){
            int pick = nums[i];
            if(i>1)pick+=prev2;
            int npick = prev;
            
            int cur = max(pick,npick);
            prev2 = prev;
            prev = cur;
        }
        
        return prev;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)return nums[0];
        vector<int>temp1,temp2;
        for(int i = 0;i<n;i++){
            if(i != 0){
                temp1.push_back(nums[i]);
            }
            if(i != n-1)temp2.push_back(nums[i]);
        }
        
        return max(f(temp1),f(temp2));
    }
};