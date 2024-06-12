class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        int n0 = 0;
        int n1 = 0;
        int n2 = 0;
        
        for(int i = 0;i<n;i++){
            if(nums[i] == 0){
                n0++;
            }else if(nums[i] == 1){
                n1++;
            }else{
                n2++;
            }
        }
        int i = 0;
        while(n0){
            nums[i] = 0;
            i++;
            n0--;
        }
        while(n1){
            nums[i] = 1;
            i++;
            n1--;
        }
        while(n2){
            nums[i] = 2;
            i++;
            n2--;
        }
    }
};