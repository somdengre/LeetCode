class Solution {
public:
    bool f(vector<int>&nums,int mid,int m,int k){
        int p = 0;
        int cnt = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] <= mid){
                cnt++;
            }else{
                p += (cnt/k);
                cnt = 0;
            }
        }
        p += (cnt/k);
        
        return p>=m;
    }
    int minDays(vector<int>& nums, int m, int k) {
        int n = nums.size();
        if(m > n/k)return -1;
         int mini = INT_MAX;
        int maxi = INT_MIN;
        int ans = -1;
        for(int i = 0;i<n;i++){
            mini = min(mini,nums[i]);
            maxi = max(maxi,nums[i]);
        }
        
        int low = mini;
        int high = maxi;
        while(low<=high){
            int mid = low+(high-low)/2;
            
            if(f(nums,mid,m,k)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        
        return ans;
    }
};