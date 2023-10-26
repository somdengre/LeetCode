class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int k=0;
        for(int i=0; i<nums.size(); i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]] > 1)
            {
                nums[i] = 101;
                continue;
            }
            k++;
        }
        sort(nums.begin(), nums.end());
        return k;
    }
};