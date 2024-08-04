class Solution {
public:
    int mod = 1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>temp;
        
        for(int i = 0;i<n;i++){
            int sum = 0;
            for(int j = i;j<n;j++){
                sum= (sum + nums[j])%mod;
                temp.push_back(sum%mod);
            }
        }
        
        sort(temp.begin(),temp.end());
        int ans = 0;
        
        for(int i = left-1;i<right;i++){
            ans= (ans+temp[i])%mod;
        }
        
        return ans%mod;
    }
};