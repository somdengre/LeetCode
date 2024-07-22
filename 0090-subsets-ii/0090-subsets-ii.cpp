class Solution {
public:
    void f(int i,vector<int>&nums,set<vector<int>>&st,vector<int>&temp){
        if(i == nums.size()){
            st.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        f(i+1,nums,st,temp);
        temp.pop_back();
        f(i+1,nums,st,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        vector<int>temp;
        f(0,nums,st,temp);
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};