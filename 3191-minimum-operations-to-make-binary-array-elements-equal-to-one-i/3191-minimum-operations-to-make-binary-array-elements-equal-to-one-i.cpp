class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(nums[i] == 1){
                continue;
            }else{
                int j = i;
                while(j<n && j<=i+2 && i+1 <n && i+2 <n){
                    nums[j] = !nums[j];
                    j++;
                }
                ans++;
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