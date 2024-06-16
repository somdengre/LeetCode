class Solution {
public:
    string longestCommonPrefix(vector<string>& nums) {
        int n = nums.size();
        string temp = nums[0];
        int ans = temp.size();
        for(int i = 1;i<n;i++){
            int j = 0;
            while(j<nums[i].length() && nums[i][j] == temp[j]){
                j++;
            }
            ans = min(ans,j);
        }
        return nums[0].substr(0,ans);
        
    }
};