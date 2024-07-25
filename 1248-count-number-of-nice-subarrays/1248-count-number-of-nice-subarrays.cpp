class Solution {
public:
    int f(vector<int>&nums,int k){
        if(k<0)return 0;
        int i = 0,j=0,n = nums.size();
        int cnt = 0;
        int ans = 0;
        while(j<n){
            if(nums[j]&1){
                cnt++;
            }
            if(cnt>k){
                while(cnt>k){
                    if(nums[i]&1){
                        cnt--;
                    }
                    i++;
                }
            }
            
            ans+=(j-i+1);
            j++;
        }
        
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return f(nums,k)-f(nums,k-1);
    }
};