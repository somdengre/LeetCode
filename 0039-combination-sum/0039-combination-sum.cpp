class Solution {
public:
    void f(int i,int k,vector<vector<int>>&ans,vector<int>&nums,vector<int>&temp){
        if(i < 0){
            return;
        }
        if(k == 0){
            ans.push_back(temp);
            return;
        }
        
        if(k>=nums[i]){
            temp.push_back(nums[i]);
            f(i,k-nums[i],ans,nums,temp);
            temp.pop_back();
        }
        f(i-1,k,ans,nums,temp);
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n = nums.size();
        f(n-1,k,ans,nums,temp);
        return ans;
    }
};