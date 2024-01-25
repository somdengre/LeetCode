class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     int n = nums.size();
//         int c = 0;
//         int j = n-1;
//         // while(nums[j] == 0){
//         //     j--;
//         // }
//         for(int i = n-2;i>=0;i--){
//             if(nums[i]<nums[n-1]){
//                 int t = nums[n-1];
//                 nums[n-1] = nums[i];
//                 nums[i] = t;
//                 return;
//                 break;
                
//             }
//         }
        
//         sort(nums.begin(),nums.end());
        next_permutation(nums.begin(),nums.end());
        
    }
};