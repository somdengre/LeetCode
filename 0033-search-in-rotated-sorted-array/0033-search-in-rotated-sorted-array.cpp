
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int l = 0;
        int h = n-1;
        int m=0;
        while(l<=h){
            m=l+(h-l)/2;
            if(nums[m]==target){
                return m;
            }
            if(nums[m]>=nums[l]){
                if(target<=nums[m] && target>=nums[l]){
                    h=m-1;
                }else{
                    l=m+1;
                }
            }else{
                if(target>=nums[m] && target<=nums[h]){
                    l=m+1;
                    
                }else{
                    h=m-1;
                }
            }
        }
        
        return -1;
        
    }
};