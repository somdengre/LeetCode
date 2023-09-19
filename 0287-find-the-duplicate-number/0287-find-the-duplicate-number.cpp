class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> m;
        int x = 0;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i]) == m.end()){
                m.insert(nums[i]);
            }
            
            else{
                x = nums[i];
                
            }
        }
        
        return x;
        
        
        
        
    }
};