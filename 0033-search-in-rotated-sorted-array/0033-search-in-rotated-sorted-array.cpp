class Solution {
public:
    int search(vector<int>& nums, int k) {
        int ans = -1;
        int n = nums.size();
        int low = 0;
        int high = n-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == k){
                return mid;
            }
            if(nums[mid] >=nums[low]){
                if(nums[mid]>=k && nums[low]<=k){
                    high = mid -1;
                } else{
                    low = mid+1;
                }
            }else{
                if(nums[mid]<=k && nums[high]>=k){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        
        return ans;
    }
};