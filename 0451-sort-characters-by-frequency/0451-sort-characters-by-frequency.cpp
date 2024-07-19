class Solution {
public:
    string frequencySort(string s) {
        int n = s.length();
        priority_queue<pair<int,char>>pq;
        map<char,int>mp;
        
        for(int i = 0;i<n;i++){
            mp[s[i]]++;
        }
        
        for(auto it:mp){
            pq.push({it.second,-1*it.first});
        }
        
        string ans = "";
        
        while(!pq.empty()){
            int no = pq.top().first;
            char ele = -1*pq.top().second;
            pq.pop();
            while(no){
                ans+=ele;
                no--;
            }
        }
        return ans;
    }
};