class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i]&1){
                cnt++;
            }else{
                cnt = 0;
            }
            
            if(cnt == 3){
                return true;
            }
        }
        
        return false;
    }
};