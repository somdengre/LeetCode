class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> st;
        for(int i = 0;i<nums.size();i++)st.insert(nums[i]);
        int i = 1;
        while(i<=st.size()){
            if(st.find(i) != st.end() )i++;
            else return i;
        }
        return i;
    }
};

