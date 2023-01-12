class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int z = nums.size();
        vector<int>ans(2*z,0);
        for(int i=0;i< z;i++){
            ans[i] = nums[i];
        }

        for(int p =z; p<2*z;  p++){
            ans[p] = nums[p-z]; 
        }
        
        return ans;
    
        
    }
};