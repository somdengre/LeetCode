class Solution {
public:
    int lb(vector<int>& nums, int x, int n) {
        int low = 0;
        int high = n - 1;
        int lw = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= x) {
                lw = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return lw;
    }

    int ub(vector<int>& nums, int x, int n) {
        int low = 0;
        int high = n - 1;
        int lw = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] > x) {
                lw = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return lw;
    }

    vector<int> searchRange(vector<int>& nums, int x) {
        int n = nums.size();
        if (n == 0) return {-1, -1};

        int l = lb(nums, x, n);
        int u = ub(nums, x, n);

        // If l is -1 or nums[l] != x, then x is not present
        if (l == -1 || nums[l] != x) return {-1, -1};

        // If u is -1, it means there is no element greater than x, so we take the last index
        if (u == -1) u = n;

        return {l, u - 1};
    }
};