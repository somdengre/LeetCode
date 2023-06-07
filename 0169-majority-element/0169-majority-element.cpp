class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i:nums)
            a[i]++;
        int max=nums[0];
        for(auto x:a)
        {
            if(x.second>a[max])
                max=x.first;
        }
        return max;
    }
};