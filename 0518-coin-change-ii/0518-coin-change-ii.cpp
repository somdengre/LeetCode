class Solution {
public:
    int change(int k, vector<int>& nums) {
        int n = nums.size();
        vector<int>prev(k+1,0);
        prev[0] = 1;
        for(int i = 1;i<=k;i++){
            if(i%nums[0] == 0)prev[i] = 1;
        }
        
        for(int i = 1;i<n;i++){
            vector<int>temp(k+1,0);
            for(int j = 0;j<=k;j++){
                int pick = 0;
                if(j>=nums[i])pick = temp[j-nums[i]];
                int npick = prev[j];
                temp[j] = pick+npick;
            }
            prev = temp;
        }
        return prev[k];
    }
};