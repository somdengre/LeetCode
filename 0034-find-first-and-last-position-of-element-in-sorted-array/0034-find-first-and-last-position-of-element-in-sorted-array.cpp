class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       
        vector<int> p;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                p.push_back(i);
            }
        }
        
        sort(p.begin(),p.end());
        int z=p.size();
        if(z==0){
            return {-1,-1};
        }else{
            ans.push_back(p[0]);
         ans.push_back(p[z-1]);
        }
        
        
        return ans;
        
        
        
        
    }
};