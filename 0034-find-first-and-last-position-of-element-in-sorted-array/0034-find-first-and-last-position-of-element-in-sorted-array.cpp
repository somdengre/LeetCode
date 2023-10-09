class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int k) {
       
        vector<int> ans;
        int s = 0;
        int res = -1;
        int e = nums.size()-1;
        
        while(s<=e){
            int m = s+(e-s)/2;
            
            if(nums[m] == k){
                res = m;
                e = m-1;
            }else if(k<nums[m]){
                e = m-1;
            }
            else{
                s= m+1;
            }
        }
        ans.push_back(res);
        s = 0;
        res = -1;
        e = nums.size()-1;
        
        
        
        
        while(s<=e){
            int m = s+(e-s)/2;
            
            if(nums[m] == k){
                res = m;
                s = m+1;
            }else if(k<nums[m]){
                e = m-1;
            }
            else{
                s= m+1;
            }
        }
        
        ans.push_back(res);
        
        return ans;
        
        
        
        
        
        
    }
};