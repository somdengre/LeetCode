class Solution {
public:
    long long maximumHappinessSum(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        long long ans = 0;
        int i = 0;
        while(k){
            if(nums[n-1-i]-i > 0){
                ans += nums[n-1-i]-i;
            }else{
                ans+=0;
            }
            i++;
            k--;
            
            // vector<int>temp;
            // while()
            
        }
        
        return ans;
    }
};