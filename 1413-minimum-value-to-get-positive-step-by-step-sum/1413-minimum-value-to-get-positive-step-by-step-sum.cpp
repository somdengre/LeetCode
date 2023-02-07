class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int value = 1;
        int sum = 1;
        
        for(int i=0;i<nums.size();i++){
            sum +=nums[i];
            
            if(sum<1){
                value++;
                sum=value;
                i=-1;
            }
        }
        
        return value;
    }
};