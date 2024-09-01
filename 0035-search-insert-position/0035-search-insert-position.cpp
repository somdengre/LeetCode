class Solution {
public:
    int searchInsert(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0,high = n-1;
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] <=k){
                ans = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        if(ans == -1)return 0;
        if( nums[ans] == k )return ans;
        return ans+1;
    }
};