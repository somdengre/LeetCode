class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums) mp[i]++;
        vector<pair<int,int>> temp;
        for(auto i:mp) temp.push_back({i.second,i.first});
        sort(temp.begin(),temp.end(),[](pair<int,int> p1,pair<int,int> p2){
            if(p1.first<p2.first) return true;
            else if(p1.first==p2.first) return p1.second>p2.second;
            return false;
        });
        vector<int> ans;
        for(auto i:temp){
            while(i.first>0){
                ans.push_back(i.second);
                i.first--;
            }
        }
        return ans;
    }
};