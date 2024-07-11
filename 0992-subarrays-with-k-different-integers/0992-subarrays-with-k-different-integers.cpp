class Solution {
public:
    int f(vector<int>&nums,int k){
        if(k<0)return 0;
        int l = 0,r=0,cnt=0;
        int n = nums.size();
        unordered_map<int,int>mp;
        
        while(r<n){
            mp[nums[r]]++;
            if(mp.size()>k){
                while(mp.size()>k){
                    mp[nums[l]]--;
                    if(mp[nums[l]] == 0)mp.erase(nums[l]);
                    l++;
                }
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return f(nums,k)-f(nums,k-1);
    }
};