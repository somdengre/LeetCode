class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i<n-2;i++){
            if(nums[i] == 0){
                ans++;
                for(int j = i;j<i+3;j++){
                    
                    nums[j] = !nums[j];
                }
            }
        }
        
        for(int i = 0;i<n;i++){
            if(nums[i] == 0){
                return -1;
            }
        }
        
        return ans;
    }
};