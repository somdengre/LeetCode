class Solution {
public:
    bool canBeEqual(vector<int>& nums, vector<int>& arr) {
        sort(nums.begin(),nums.end());
        sort(arr.begin(),arr.end());
        
        return nums == arr;
    }
};