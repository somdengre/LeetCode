class Solution {
public:
    int candy(vector<int>& nums) {
        int n = nums.size();
        int sum = n;
        int i = 1;
        
        while(i<n){
            
            if(nums[i] == nums[i-1]){
                i++;
                continue;
            }
            
            int peak = 0;
            
            while(i<n && nums[i-1] < nums[i]){
                peak++;
                sum+=peak;
                i++;
            }
            int down = 0;
            while(i<n && nums[i-1]>nums[i]){
                down++;
                sum+=down;
                i++;
            }
            
            sum-=min(down,peak);
        }
        
        return sum;
        
        
    }
};