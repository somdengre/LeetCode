class Solution {
public:
    int noOfBalls(vector<int>&nums,int gap){
        int balls = 1;
        int lastPos = nums[0];
        
        for(int i = 1;i<nums.size();i++){
            if(nums[i]-lastPos >= gap){
                lastPos = nums[i];
                balls++;
            }
        }
        return balls;
    }
    int maxDistance(vector<int>& nums, int m) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        int low = 1;
        int high = nums[n-1]-nums[0];
        int ans = 0;
        while(low<=high){
            int mid = low+(high-low)/2;
            
            if(noOfBalls(nums,mid) >= m){
                ans = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        
        return ans;
    }
};