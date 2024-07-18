class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int x) {
        int n = nums.size();
        int m = nums[0].size();
        
        for(int i = 0;i<n;i++){
            if(nums[i][0]<=x && nums[i][m-1]>=x){
                int low = 0;
                int high = m-1;
                
                while(low<=high){
                    int mid = (low+high)/2;
                    if(nums[i][mid] == x){
                        return true;
                    }else if(nums[i][mid]>x){
                        high = mid-1;
                    }else{
                        low = mid+1;
                    }
                }
            }
        }
        
        return false;
    }
};