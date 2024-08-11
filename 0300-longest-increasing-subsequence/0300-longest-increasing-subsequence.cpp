class Solution {
public:

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>next(n+1,0);
        
        for(int i = n-1;i>=0;i--){
            vector<int>cur(n+1,0);
            for(int prev_ind = i-1;prev_ind>=-1;prev_ind--){
                int len = next[prev_ind+1] ;
                if(prev_ind == -1 || nums[prev_ind]<nums[i]){
                    len = max(len,1+next[i+1]);
                }
        
                cur[prev_ind+1] = len;
            }
            next = cur;
        }
        return next[-1+1];
    }
};