class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)return 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxi = 0;
        int cnt = 0;
        for(int i = 0;i<n-1;i++){
            if(nums[i+1]-nums[i] == 1){
                cnt++;
                maxi = max(maxi,cnt);
            }else if(nums[i+1]-nums[i] == 0){
                continue;
            }else{
                cnt = 0;
            }
        }
        return maxi+1;
    }
};