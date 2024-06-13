class Solution {
public:
    int f(vector<vector<int>>&nums,int n,int m,int mid){
        int maxi = INT_MIN;
        int index = -2;
        for(int i = 0;i<n;i++){
            if(nums[i][mid] > maxi){
                maxi = nums[i][mid];
                index = i;
            }   
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& nums) {
        int n =nums.size();
        int m = nums[0].size();
        
        int low = 0;
        int high = m-1;
        while(low<=high){
            int mid = (low+high)/2;
            
            int row = f(nums,n,m,mid);
            
            int left = mid-1 >=0?nums[row][mid-1]:-1;
            int right = mid+1< m ? nums[row][mid+1]:-1;
            
            if(nums[row][mid]>left &&  nums[row][mid]>right){
                return {row,mid};
            }else if(nums[row][mid] < left){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        
        return {-1,-1};
    }
};