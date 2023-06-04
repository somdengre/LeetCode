class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int j=0;
        int ans=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            
            if(i-j+1 ==k){
                
                ans = max(ans,sum);
                sum-=nums[j];
                j++;

            }
            
            
            
        }
        
        return ((double)ans/k);
    }
};