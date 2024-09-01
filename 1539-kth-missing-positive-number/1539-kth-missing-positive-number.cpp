class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        //smaller numbers will take its place like if we are given an arr like [2,4,7,9], k= 5, 2,4,7 will take a place , so the answer will be 8.
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i] <= k){
                k++;
            }else{
                break;
            }
        }
        
        return k;
    }
};