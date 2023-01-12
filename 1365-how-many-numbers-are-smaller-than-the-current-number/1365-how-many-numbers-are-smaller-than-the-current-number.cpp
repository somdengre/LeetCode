class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int z = nums.size();
        int q = 0;
        for(int i=0; i<z; i++){
            for(int j=0; j<z;j++ ){
                if(nums[i]>nums[j]){
                    q++;
                }
   
            }
            ans.push_back(q);
            q=0;
            
            
        }
        return ans;
    }
};