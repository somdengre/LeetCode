class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n+1, -1);
        for(int i = 0;i<nums.size();i++){
            v[nums[i]] = 1;
        }
        int ans = 0;
        for(int i = 0;i<v.size();i++){
            if(v[i] == -1){
                ans = i;
                break;
            }
        }
        return ans;
        
        
    }
};