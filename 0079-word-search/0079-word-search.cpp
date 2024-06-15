class Solution {
public:
    bool f(int i, int j, vector<vector<char>>& nums, vector<vector<int>>& vis, string& k, int t) {
        int n = nums.size();
        int m = nums[0].size();
        if (t == k.length()) {
            return true;
        }

        // Check boundaries and character match
        if (i < 0 || j < 0 || i >= n || j >= m || vis[i][j] == 1 || nums[i][j] != k[t]) {
            return false;
        }

        // Mark the current cell as visited
        vis[i][j] = 1;

        // Explore all four possible directions
        if (f(i + 1, j, nums, vis, k, t + 1) ||
            f(i - 1, j, nums, vis, k, t + 1) ||
            f(i, j + 1, nums, vis, k, t + 1) ||
            f(i, j - 1, nums, vis, k, t + 1)) {
            return true;
        }

        // Backtrack
        vis[i][j] = 0;
        return false;
    }

    bool exist(vector<vector<char>>& nums, string k) {
        int n = nums.size();
        int m = nums[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (nums[i][j] == k[0]) {
                    if (f(i, j, nums, vis, k, 0)) {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};