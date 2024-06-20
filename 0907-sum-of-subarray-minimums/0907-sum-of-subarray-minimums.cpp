class Solution {
public:
    int mod = 1e9+7;
    int sumSubarrayMins(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n,0),right(n,0);
        stack<pair<int,int>>sleft,sright;
        
        for(int i =0;i<n;i++){
            int cnt = 1;
            while(!sleft.empty() && sleft.top().first > nums[i]){
                cnt+=sleft.top().second;
                sleft.pop();
            }
            
            sleft.push({nums[i],cnt});
            left[i] = cnt;
        }
        
        for(int i = n-1;i>=0;i--){
            int cnt = 1;
            while(!sright.empty() && sright.top().first >= nums[i]){
                cnt+=sright.top().second;
                sright.pop();
            }
            
            sright.push({nums[i],cnt});
            right[i] = cnt;
        }
         long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long product = ((long long)nums[i] * left[i] % mod * right[i] % mod) % mod;
            ans = (ans + product) % mod;
        }

        return ans;
        
    }
};