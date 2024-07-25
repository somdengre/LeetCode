class Solution {
public:
    void f(int i,vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp){
        if(i > (nums.size()-1)){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        f(i+1,nums,ans,temp);
        temp.pop_back();
        f(i+1,nums,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        f(0,nums,ans,temp);
        return ans;
    }
};