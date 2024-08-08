class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int k) {
        int n = nums.size();
        int s = 0;
        for(int i = 0;i<n;i++)s+=nums[i];
        int p = s-k;
        if(p<0 || p&1)return 0;
        p = p/2;
        vector<int>prev(p+1,0);
        
        for(int i = 0;i<=p;i++){
            if(i == 0 && nums[0] == i)prev[i] = 2;
            else if(i == 0 || nums[0] == i)prev[i] = 1;
            else prev[i] = 0;
        }
        
        for(int i = 1;i<n;i++){
            vector<int>temp(p+1,0);
            for(int k = 0;k<=p;k++){
                int pick = 0;
                if(k >= nums[i])pick = prev[k-nums[i]];
                int npick = prev[k];
                temp[k] = pick+npick;
            }
            prev = temp;
        }
        
        return prev[p];
    }
};