class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int> k(n,0);
        int ans = 0;
        
        for(int i=0;i<nums.size();i++){
            k[nums[i]-1]+=1;
        }
        
        for(int i=0;i<k.size();i++){
            if(k[i]>1){
                ans = i;
            }
        }
        
        return ans+1;
        
        
    }
};