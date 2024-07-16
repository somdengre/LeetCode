class Solution {
public:
    long long f(vector<int>nums,int k){
        long long hours = 0;
        
        for(int i = 0;i<nums.size();i++){
            hours +=(nums[i] + k - 1) / k;
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& nums, int h) {
        int n = nums.size();
        int low = 1;
        int high = 0;
        for(int i = 0;i<n;i++){
            high = max(high,nums[i]);
        }
        int ans = 0;
        while(low<=high){
            int mid = (low+high)/2;
            long long hours = f(nums,mid);
            if(hours <= h){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
            
        }
        
        return ans;
    }
};