class Solution {
public:
    int findMinDifference(vector<string>& nums) {
        int n = nums.size();
        int ans = INT_MAX;  
        vector<int> mts;

        
        for (int i = 0; i < n; i++) {
            int h = 10 * (nums[i][0] - '0') + (nums[i][1] - '0');
            int m = 10 * (nums[i][3] - '0') + (nums[i][4] - '0');
            mts.push_back(60 * h + m);
        }

        sort(mts.begin(), mts.end());

        for (int i = 1; i < n; i++) {
            int diff = mts[i] - mts[i - 1];
            ans = min(ans, diff);
        }

        int temp = 1440 - (mts[n - 1] - mts[0]); 
        ans = min(ans, temp);

        return ans;
    }
};
