class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        
        int first = -1;
        int last = -1;
        
        while(low<=high){
            int mid = (low+high)/2;
            
            if(nums[mid]>=k){
                first = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        
        low = 0;
        high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>k){
                last = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        
        if(first == -1 || nums[first] != k)return {-1,-1};
        if(last == -1)last = n;
        return {first,last-1};
        
    }
};