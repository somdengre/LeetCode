class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n = nums.size();
        if(n == 1)return nums;
        int start = nums[0][0];
        int last = nums[0][1];
        for(int i = 1;i<n;i++){
            if(nums[i][0] <= last){
                last = max(last,nums[i][1]);
                start = min(start,nums[i][0]);
            }else{
                vector<int>temp;
                temp.push_back(start);
                temp.push_back(last);
                ans.push_back(temp);
                start = nums[i][0];
                last = nums[i][1];
            }
        }
        
        vector<int>temp;
        temp.push_back(start);
        temp.push_back(last);
        ans.push_back(temp);
        
        return ans;
    }
};