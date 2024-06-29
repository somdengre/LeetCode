class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        
        int n = nums.size();
        for(int i = 0;i<n;i++){
            swap(nums[i][0],nums[i][1]);
        }
        
        sort(nums.begin(),nums.end());
        int last = INT_MIN;
        int cnt = 0;
        
        for(int i = 0;i<n;i++){
            if(last <= nums[i][1]){
                last = nums[i][0];
            }else{
                cnt++;
            }
            
        }
        
        return cnt;
    }
};