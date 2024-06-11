class Solution {
public:
    bool possible(vector<int>&nums,int mid,int k ){
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum += (nums[i] + mid - 1) / mid;
        }
        
        return sum<=k;
        
    }
    int smallestDivisor(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = INT_MIN;
        int ans = 0;
        for(int i = 0;i<n;i++){
            maxi = max(maxi,nums[i]);
        }
        
        int low = 1;
        int high = maxi;
        
        while(low<=high){
            int mid = (low+high)/2;
            
            if(possible(nums,mid,k) == true){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};