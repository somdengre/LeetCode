typedef pair<int,int> p;
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        priority_queue<p,vector<p>,greater<p>>q;
        for(int i=0;i<nums.size();i++)
        {
            q.push({nums[i],i});
            if(q.size()>k)
            {
                q.pop();
            }
        }
        
        priority_queue<p,vector<p>,greater<p>>aux;
        while(!q.empty())
        {
            aux.push({q.top().second,q.top().first});
            q.pop();
        }
        
        vector<int>ans;
        while(!aux.empty())
        {
            ans.push_back(aux.top().second);
            aux.pop();
        }
        
        return ans;
    }
};