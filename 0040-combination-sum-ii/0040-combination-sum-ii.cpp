class Solution {
public:
    void f(int ind ,vector<int>&nums,vector<vector<int>>&ans,int k,vector<int>&temp){
       if(k == 0){
           ans.push_back(temp);
           return;
       }
        
        for(int i = ind;i<nums.size();i++){
            if(i>ind && nums[i-1]== nums[i])continue;
            if(nums[i]>k)break;
            temp.push_back(nums[i]);
            f(i+1,nums,ans,k-nums[i],temp);
            temp.pop_back();
        }
    }
    vector<vector<int>>combinationSum2(vector<int>& nums, int k) {
        vector<int>temp;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>>ans;                                                          
        f(0,nums,ans,k,temp);
        return ans;
    }
};