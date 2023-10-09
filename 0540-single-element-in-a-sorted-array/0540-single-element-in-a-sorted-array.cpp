class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        if(nums[0]!=nums[1])return nums[0];
        if(nums[n-1]!= nums[n-2])return nums[n-1];
        
        int s = 1;
        int e = n-2;
        
        while(s<=e){
            int mid = s+(e-s)/2;
            
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])return nums[mid];
            
            else if((mid%2==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1])){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        
        return -1;
    }
};



// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//       int n=nums.size();
//         if(n==1)return nums[0];
//         if(nums[0]!=nums[1])return nums[0];
//         if(nums[n-1]!=nums[n-2])return nums[n-1];
//         int st=1,end=n-2;
//         while(st<=end){
//             int mid=(st+end)/2;
//             if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])return nums[mid];

//             if((mid%2==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1]) ){
//                 st=mid+1;
//             }else{
//                 end=mid-1;
//             }
//         }
//         return -1;
//     }
// };