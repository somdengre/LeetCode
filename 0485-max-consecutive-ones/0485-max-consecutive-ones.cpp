// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int count = 0;
//         int ans = 0;
//         int j=0;
//         int i=0;
        
//        for(int i=0;i<nums.size();i++){
           
//            if(nums[i]==1){
//                count++;
//                continue;
//            }
//            else{
               
//                count=0;
//            }
//            ans = max(ans,count);
//        }
        
//         return ans;
//     }
// };

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max, temp_max, check;
        max = temp_max = check = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                
                temp_max++;
            } else { 
                
                temp_max = 0;
            }
            if (temp_max > max) max = temp_max;
        }
        return max;
    }
};