class Solution {
public:
    int mod = 1e9+7;
    int sumSubarrayMins(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n,-1),right(n,n);
        stack<pair<int,int>>st;
        for(int i = 0;i<n;i++){
            while(!st.empty() && st.top().first >= nums[i]){
                st.pop();
            }
            if(!st.empty()){
                left[i] = st.top().second;
            }
            st.push({nums[i],i});
        }
        while(!st.empty())st.pop();
        for(int i = n-1;i>=0;i--){
            while(!st.empty() && st.top().first > nums[i]){
                st.pop();
            }
            if(!st.empty()){
                right[i] = st.top().second;
            }
            st.push({nums[i],i});
        }
        int ans = 0;
        for(int i = 0;i<n;i++){
            long long leftel = i-left[i];
            long long  rightel = right[i] - i;
            ans = (ans + (leftel * rightel % mod) * nums[i] % mod) % mod;
        }
        
        return ans%mod;
    }
};