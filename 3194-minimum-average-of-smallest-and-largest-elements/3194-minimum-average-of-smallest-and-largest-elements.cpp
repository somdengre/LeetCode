class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = n-1;
        double ans = 10000.0;
        while(i<=j){
            double p = ((double)(nums[i]+nums[j]));
            p = p/2;
            if(p<ans)ans = p;
            i++;
            j--;
        }
        
        return ans;
        
        
    }
};