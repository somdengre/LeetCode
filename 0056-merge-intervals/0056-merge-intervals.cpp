class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int i = 0;
        int n = nums.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        while(i<n){
            mini = nums[i][0];
            maxi = nums[i][1];
            vector<int>temp = {mini,maxi};
            i++;
            while(i<n && nums[i][0] <= temp[1] ){
                temp[0] = min(temp[0],nums[i][0]);
                temp[1] = max(temp[1],nums[i][1]);
                i++;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};