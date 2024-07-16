class Solution {
public:
    int f(vector<int>&nums,int mid,int k){
        int p = 0;
        int cnt = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<=mid){
                cnt++;
            }else{
                cnt = 0;
            }
            
            if(cnt == k){
                p+=1;
                cnt = 0;
            }
            
        }
        
        return p;
    }
    int minDays(vector<int>& nums, int m, int k) {
        int n = nums.size();
        int ans = -1;
        if(n/k<m)return -1;
        int low = INT_MAX;
        int high = INT_MIN;
        
        for(int i = 0;i<n;i++){
            low = min(low,nums[i]);
            high = max(high,nums[i]);
        }
        
        while(low<=high){
            int mid = (low+high)/2;
            int p = f(nums,mid,k);
            if(p >= m){
               ans = mid;
               high = mid-1; 
            }else{
                low=mid+1;
            }
        }
        
        return ans;
    }
};