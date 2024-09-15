class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int maxel = nums[0],len = 0,maxlen = 0;
        
        for(int i = 0;i<n;i++){
            if(nums[i] == maxel){
                len++;
                maxlen  = max(maxlen,len);
            }else if(nums[i] > maxel){
                maxel = nums[i];
                maxlen = 1;
                len = 1;
            }else{
                len = 0;
            }
            
            
        }
        
        return maxlen;
    }
};