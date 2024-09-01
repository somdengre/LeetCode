class Solution {
public:
    int f(vector<int>&nums,int mid,int d){
        int cnt = 0;
        int days = 1;
        
        for(int i = 0;i<nums.size();i++){
            if(cnt+nums[i] <= mid){
                cnt+=nums[i];
            }else{
                cnt = nums[i];
                days++;
            }
        }
        
        return days<=d;
    }
    int shipWithinDays(vector<int>& nums, int d) {
        int n = nums.size();
        int low = nums[0];
        int high = 0,ans = 0;
        
        for(int i = 0;i<n;i++){
            low = max(low,nums[i]);
            high += nums[i];
        }
        
        while(low<=high){
            int mid = (low+high)/2;
            if(f(nums,mid,d)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        
        return ans;
    }
};