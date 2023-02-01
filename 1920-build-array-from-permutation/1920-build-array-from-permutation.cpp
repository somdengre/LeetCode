class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {

     vector<int> Ans;
        int n=nums.size();
        int ans[n];
        for(int i=0;i<n;i++)
        {
            ans[i]=nums[nums[i]];
        }
        for(int i=0;i<n;i++)
        {
            Ans.push_back(ans[i]);
        }
        return Ans;

    }
};