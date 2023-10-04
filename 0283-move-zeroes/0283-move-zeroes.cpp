class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 0;
        int n = nums.size();
        
        
        for(int i= n-1;i>=0;i--){
            if(nums[i]==0){
                c++;
                nums.erase(nums.begin()+i);
                
            }    
        }
        
        for(int i = 1;i<= c ;i++){
            nums.push_back(0);
        }
        
        
    }
};

