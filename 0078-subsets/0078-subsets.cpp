class Solution {
public:
    void f(vector<vector<int>>&ans,vector<int>&temp,int i,vector<int>&nums){
        if(i<0)return ;
        
        temp.push_back(nums[i]);
        ans.push_back(temp);
        f(ans,temp,i-1,nums);
        temp.pop_back();
        f(ans,temp,i-1,nums);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        ans.push_back({});
        vector<int>temp;
        f(ans,temp,n-1,nums);
        return ans;
    }
};