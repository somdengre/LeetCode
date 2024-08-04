class Solution {
public:
    int maximumEnergy(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int n = nums.size();
        vector<vector<int>>ans(n+1);
        int ind = 0;
        for(int i = 0;i<n;i++){
            ans[ind].push_back(nums[i]);
            ind++;
            if(ind == k)ind = 0;
        }
        for(auto it: ans){
            if(it.size() > 0){
                int sum = 0;
                for(int j = it.size()-1;j>=0;j--){
                    sum+=it[j];
                    maxi = max(maxi,sum);
                }
                
            }
        }

        return maxi;
    }
};