class Solution {
public:
    int minimumPushes(string s) {
        int n = s.length(),ans = 0;
        map<char,int>mp;
        for(int i = 0;i<n;i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        
        for(auto it: mp){
            pq.push({it.second,it.first});
        }
        int p = 1,cnt = 0;
        while(!pq.empty()){
            mp[pq.top().second] = p;
            cnt++;
            pq.pop();
            if(cnt == 8){
                p++;
                cnt = 0;
            }
        }
        
        for(int i = 0;i<n;i++){
            ans+=mp[s[i]];
        }
        return ans;
    }
};