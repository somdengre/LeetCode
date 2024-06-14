class Solution {
public:
    void f(int ind,int k,vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp){
        
            if(k == 0){
                ans.push_back(temp);
                return;
            }
            
        
        
        for(int i = ind;i<nums.size();i++){
            if(i>ind && nums[i] == nums[i-1])continue;
            if(nums[i] > k)break;
            temp.push_back(nums[i]);
            f(i+1,k-nums[i],nums,ans,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        f(0,k,nums,ans,temp);
        
        return ans;
    }
};