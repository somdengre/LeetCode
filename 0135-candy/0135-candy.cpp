class Solution {
public:
    int candy(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n,0);
        left[0] = 1;
        
        for(int i = 1;i<n;i++){
            if(nums[i] > nums[i-1]){
                left[i] = left[i-1]+1;
            }else{
                left[i] = 1;
            }
        }
        
        int curr = 1,right = 1,ans = max(left[n-1],1);
        for(int i = n-2;i>=0;i--){
            if(nums[i] > nums[i+1]){
                curr = right+1;
                right = curr;
            }else{
                curr = 1;
                right = curr;
            }
            ans+=max(left[i],curr);
        }
        
        
        return ans;
    }
};