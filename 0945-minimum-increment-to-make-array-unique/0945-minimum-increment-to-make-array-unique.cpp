class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int cnt = 0;
        for(int i = 0;i<n-1;i++){
            if(nums[i] < nums[i+1]){
                continue;
            }else{
                int p = nums[i]-nums[i+1]+1;
                cnt+=p;
                nums[i+1] += p;
            }
        }
        
        return cnt;
    }
};