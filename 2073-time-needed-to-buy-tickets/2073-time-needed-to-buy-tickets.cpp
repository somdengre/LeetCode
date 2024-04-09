class Solution {
public:
    int timeRequiredToBuy(vector<int>& nums, int k) {

        int ans = 0;
        
        while(nums[k] != 0){
            for(int i = 0;i<nums.size();i++){
                if(nums[i] == 0){
                    continue;
                }else if(nums[k] == 0){
                    break;
                }else{
                    ans++;
                    nums[i]--;
                }
            }
        }
        
        return ans;
    }
};