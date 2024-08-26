class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0,j = 0,n = nums.size();
        
        while(j<n){
            while(j<n && nums[i] == nums[j]){
                j++;
            }
            if(j<n){
                i++;
                nums[i] = nums[j];
                
            }
        }
        return i+1;
    }
};