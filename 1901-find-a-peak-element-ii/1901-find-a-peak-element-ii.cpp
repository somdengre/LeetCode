class Solution {
public:
    int f(vector<vector<int>>&nums,int m,int n,int col){
        int row = -1;
        int maxi = INT_MIN;
        for(int i = 0;i<n;i++){
            if(maxi<nums[i][col]){
                maxi = max(maxi,nums[i][col]);
                row = i;
            }
        }
        
        return row;
    }
    vector<int> findPeakGrid(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        
        
        int low = 0;
        int high = m-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            int row = f(nums,m,n,mid);
            int left = mid-1 >=0 ? nums[row][mid-1]: -1;
            int right = mid+1 < m ? nums[row][mid+1]:-1;
            if(nums[row][mid] > left && nums[row][mid]>right){
                return {row,mid};
            }else if(nums[row][mid]<left){
                high = mid-1;
            }else{
                low = mid+1;
            }
            
        }
        
        return {-1,-1};
    }
};