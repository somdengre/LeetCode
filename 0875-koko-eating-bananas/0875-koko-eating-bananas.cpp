class Solution {
public:
    long long f(vector<int>&nums,int mid){
        long long time = 0;
        
        for(int i = 0;i<nums.size();i++){
            time+= (nums[i] + mid - 1) / mid;;
        }
        
        return time;
    }
    int minEatingSpeed(vector<int>& nums, int h) {
        int n = nums.size();
        int maxi = INT_MIN;
        int ans = 0;
        for(int i = 0;i<n;i++){
            maxi = max(maxi,nums[i]);
        }
        
        int low = 1;
        int high = maxi;
        
        while(low<=high){
            int mid = (low+high)/2;
            long long time = f(nums,mid);
            if(time<=h){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        
        return ans;
    }
};