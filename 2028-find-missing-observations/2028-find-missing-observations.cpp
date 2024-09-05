class Solution {
public:
    vector<int> missingRolls(vector<int>& nums, int mean, int n) {
        int m = nums.size();
        int sum = 0;
        for(int i = 0;i<m;i++)sum+=nums[i];
        int req = (mean*(m+n))-(sum);
        vector<int>ans;
        if(req <= 0 || req > n*6 || req<n)return ans;
        
        int b = req/n;
        int r = req%n;
        
        for(int i = 0;i<n;i++){
            if(i < r){
                ans.push_back(b+1);
            }else{
                ans.push_back(b);
            }
        }
        
        return ans;
    }
};