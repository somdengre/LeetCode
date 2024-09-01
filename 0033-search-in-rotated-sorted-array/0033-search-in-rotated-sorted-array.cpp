class Solution {
public:
    int search(vector<int>& nums, int x) {
        int n = nums.size();
        int low = 0,high = n-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == x){
                return mid;
            }else if(nums[mid] >= nums[low]){
                if(nums[mid] >= x && nums[low] <= x){
                    high = mid-1;
                }else{
                    low = mid+1;
                } 
            }else{
                if(nums[mid] <=x && nums[high] >= x){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        
        return -1;
    }
};