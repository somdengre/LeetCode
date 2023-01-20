class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<pair<int,int>> pq;
        
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
            
        }
        
        int a = pq.top().first;
        pq.pop();
        
        int b= pq.top().first;
        
        int ans = (a-1)*(b-1);
        
        return ans;
    }
};