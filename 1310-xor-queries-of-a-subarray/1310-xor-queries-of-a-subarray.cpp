class Solution {
public:
    int f(vector<int>&arr,vector<int>&nums){
        int xr = 0;
        for(int i = arr[0];i<=arr[1];i++){
            xr^=nums[i];
        }
        return xr;
    }
    vector<int> xorQueries(vector<int>& nums, vector<vector<int>>& arr) {
        vector<int>ans;
        
        int n = arr.size();
        
        for(int i = 0;i<n;i++){
            int p = f(arr[i],nums);
            ans.push_back(p);
        }
        return ans;
    }
};