class Solution {
public:
    int f(vector<int>&nums,int k){
        if(k<0)return 0;
        int n = nums.size();
        int i = 0,j=0;
        int sum = 0;
        int cnt = 0;
        while(j<n){
            sum+=nums[j];
            if(sum>k){
                while(sum>k){
                    sum-=nums[i];
                    i++;
                }
            }
            
            cnt+=(j-i+1);
            j++;
        }
        
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int k) {
        return f(nums,k)-f(nums,k-1);
    }
};