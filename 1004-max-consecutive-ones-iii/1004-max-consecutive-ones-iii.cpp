class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = 0;
        int l = 0,r = 0;
        int zero = 0;
        while(r<n){
            if(nums[r] == 0){
                zero++;
            }
            
            while(zero>k){
                if(nums[l] == 0){
                    zero--;
                }
                l++;
            }
            if(zero<=k){
                maxi = max(maxi,r-l+1);
            }
            r++;
            
        }
        return maxi;
    }
};