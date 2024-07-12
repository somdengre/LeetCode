class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp(n+1,-1);
        for(int i = 0;i<n;i++){
            temp[nums[i]] = 1;
        }
        
        for(int i = 0;i<n+1;i++){
            if(temp[i] == -1)return i;
        }
        return -1;
    }
};