class Solution {
public:
    int Possible(int mid,vector<int>&nums,int n,int k,int m){
        int cnt = 0;
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(nums[i] <= mid){
                cnt++;
            }else{
                ans+=cnt/k;
                cnt = 0;
            }
        }
        ans+=cnt/k;
        return ans>=m;
    }
    int minDays(vector<int>& nums, int m, int k) {
        int n = nums.size();
        if(n/k < m)return -1;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        
        for(int i = 0;i<n;i++){
            mini = min(mini,nums[i]);
            maxi = max(maxi,nums[i]);
        }
        
        int low = mini;
        int high = maxi;
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(Possible(mid,nums,n,k,m) == true){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        
        return ans;
    }
};