class Solution {
public:
    int f(int low,int high,vector<int>&nums,int k){
        int mid = (low+high)/2;
        if(low>high)return -1;
        
        if(nums[mid] == k)return mid;
        else if(nums[mid] < k)return f(mid+1,high,nums,k);
        else return f(low,mid-1,nums,k);
    }
    int search(vector<int>& nums, int k) {
        int n = nums.size();
        
        return f(0,n-1,nums,k);
    }
};