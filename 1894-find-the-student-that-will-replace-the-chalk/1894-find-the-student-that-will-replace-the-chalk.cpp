class Solution {
public:
    int chalkReplacer(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = 0;
        
        for(int i = 0;i<n;i++){
            sum+=nums[i];
        }
        k = k%sum;
        for(int i = 0;i<n;i++){
            if(k>=nums[i]){
                k-=nums[i];
            }else{
                return i;
            }
        }
        
        return 0;
        
    }
};