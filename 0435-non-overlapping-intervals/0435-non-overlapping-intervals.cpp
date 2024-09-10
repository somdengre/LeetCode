class Solution {
public:
    static bool comp(vector<int>numsa,vector<int>numsb){
        return numsa[1] < numsb[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end(),comp);
        
        int last = INT_MIN;
        int cnt = 0;
        
        for(int i = 0;i<n;i++){
            if(nums[i][0] >= last){
                cnt++;
                last = nums[i][1];
            }
        }
        
        return n-cnt;
    }
};