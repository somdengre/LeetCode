class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int>ans;
        for(int i =0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        
        while(!pq.empty()){
            int p = pq.top();
            pq.pop();
            int q = pq.top();
            pq.pop();
            ans.push_back(q);
            ans.push_back(p);
        }
        
        return ans;
        
    }
};