
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n,0);
        for(int i=0,k=0;i<n;i++,k+=2){
            ans[k]=nums[i];
            ans[k+1]=nums[n+i];
        }
        return ans;
    }
};