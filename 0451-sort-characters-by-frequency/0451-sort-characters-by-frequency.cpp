class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        string ans = "";;
        
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it: mp){
            pq.push({it.second,it.first});
        }
        
        while(!pq.empty()){
            char ch = pq.top().second;
            int t = pq.top().first;
            pq.pop();
            while(t){
                ans+=ch;
                t--;
            }
        }
        
        return ans;
    }
};