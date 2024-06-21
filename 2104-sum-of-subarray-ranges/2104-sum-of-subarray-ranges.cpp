class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long maxi = 0;
        long long mini = 0;
        int n = nums.size();
        for(int i = 0;i < n;i++){
            long long ma = INT_MIN;
            long long mi = INT_MAX;
            for(int j = i;j<n;j++){
                ma = max((int)ma,nums[j]);
                mi = min((int)mi,nums[j]);
                
                maxi+=ma;
                mini +=mi;
            }
            
        }
        
        return maxi-mini;
    }
};