class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0,j=0;
        int n = nums.size();
        
        while(j<n){
            if(nums[j]!= 0){
                nums[l] = nums[j];
                l++;
            }
            j++;
        }
        
        while(l<n){
            nums[l] = 0;
            l++;
        }
        
    }
};