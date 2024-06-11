class Solution {
public:
    bool possible(vector<int>&nums,int j,int m,int k){
        int cnt = 0;
        int n = 0;
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i] <= j){
                cnt++;
            }else{
                n+=cnt/k;
                cnt = 0;
            }
        }
        n+=(cnt/k);
        return n >= m;
    }
    int minDays(vector<int>& nums, int m, int k) {
        int n = nums.size();
        if(m>n/k)return -1;
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
            int mid = (low+high)/2;
            
            if(possible(nums,mid,m,k) == true){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};