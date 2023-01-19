class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minh;
        vector<int> ans;
        for(int p=0;p<nums.size();p++){
            mp[nums[p]]++;
        }
        
        for(auto i=mp.begin();i!=mp.end();i++){
            minh.push({i->second,i->first});
            
            if(minh.size()>k){
                minh.pop();
            }
        }
        
        while(!minh.empty()){
            ans.push_back(minh.top().second);
            minh.pop();
        }
        
        return ans;
    }
};