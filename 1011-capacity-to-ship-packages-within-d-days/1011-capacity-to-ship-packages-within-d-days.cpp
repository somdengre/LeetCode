class Solution {
public:
    int f(vector<int>&nums,int capacity){
        int days = 1;
        int load = 0;
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i]+load <= capacity){
                load+=nums[i];
            }else{
                days+=1;
                load = nums[i];
            }
        }
        
        return days;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int n = nums.size();
        int maxi = INT_MIN;
        int sum = 0;
        
        for(int i = 0;i<n;i++){
            sum+=nums[i];
            maxi =max(maxi,nums[i]);
        }
        int ans = 0;
        int high = sum;
        int low =  maxi;
        
        while(low<=high){
            int mid = (low+high)/2;
            int nOfDays = f(nums,mid);
            if(nOfDays<=days){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        
        return ans;
        
    }
};