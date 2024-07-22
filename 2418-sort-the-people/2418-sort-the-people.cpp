class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& nums) {
        priority_queue<pair<int,string>>pq;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            pq.push({nums[i],names[i]});
        }
        int i = 0;
        while(!pq.empty()){
            names[i] = pq.top().second;
            pq.pop();
            i++;
        }
        
        return names;
    }
};