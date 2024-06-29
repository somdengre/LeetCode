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
                if(five>=1){
                    five--;
                    ten++;
                }else{
                    return false;
                }
            }else{
                if(ten>=1 && five>=1){
                    ten--;
                    five--;
                }else if(five>=3){
                    five-=3;
                }else{
                    return false;
                }
            }
        }
        
        return true;
    }
};