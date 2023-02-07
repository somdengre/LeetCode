class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int tsum = 0;
        for(int i=0;i<nums.size();i++){
            tsum+=nums[i];
        }
        int rsum = 0;
        int lsum = 0;
        for(int j=0;j<nums.size();j++){
            rsum = tsum-lsum-nums[j];
            
            if(rsum == lsum){
                return j;
            }
            
            lsum +=nums[j];
        }
        
        return -1;
    }
};