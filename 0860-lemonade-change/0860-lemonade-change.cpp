class Solution {
public:
    bool lemonadeChange(vector<int>& nums) {
        int five = 0;
        int ten = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i] == 5){
                five++;
            }else if(nums[i] == 10){
                if(five>0){
                    five--;
                    ten++;
                }else{
                    return false;
                }
            }else{
                if(five>0 && ten>0){
                    five--;
                    ten--;
                }else if(five>2){
                    five-=3;
                    
                }else{
                    return false;
                }
            }
        }
        
        return true;
    }
};