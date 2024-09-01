class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        int first = -1,second = -1;
        int n = nums.size();
        int low = 0,high = n-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] <= x){
                first = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        
        low = 0,high = n-1; 
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] >= x){
                second = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        
        if(first == -1 || second == -1)return {-1,-1};
        if(nums[first] != x || nums[second] != x)return {-1,-1};
        
        return {second,first};
    
    }
};