class Solution {
public:
    bool bs(vector<int>&nums,int k,int m){
        int low = 0;
        int high = m-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == k){
                return true;
            }else if(nums[mid] > k){
                high = mid-1;
            }else {
                low = mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& nums, int k) {
        
        int n = nums.size();
        int m = nums[0].size();
        
        for(int i = 0;i<n;i++){
            if(nums[i][0] <= k && nums[i][m-1] >=k){
                return bs(nums[i],k,m);
            }
        }
        
        return false;
    }
};