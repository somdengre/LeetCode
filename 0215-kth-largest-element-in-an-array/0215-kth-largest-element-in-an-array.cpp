class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int p = nums.size();
        priority_queue <int, vector<int>, greater<int>> mh;
        
        for(int i=0;i<p; i++){
            mh.push(nums[i]);
            
            if(mh.size()>k){
                mh.pop();
            }
        }
        
        return mh.top();
        
    }
};