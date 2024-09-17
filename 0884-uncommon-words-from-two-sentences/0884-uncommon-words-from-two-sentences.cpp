class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        map<string,int>mp;
        
        int i = 0;
        while(i<s1.length()){
            string temp = "";
            while(i< s1.length() && s1[i] != ' '){
                temp+=s1[i];
                i++;
            }
            if(temp.length() > 0)mp[temp]++;
            i++;
        }
        i = 0;
        while(i<s2.length()){
            string temp = "";
            while(i< s2.length() && s2[i] != ' '){
                temp+=s2[i];
                i++;
            }
            mp[temp]++;
            i++;
        }
        
        for(auto it: mp){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        
        return ans;
        
    }
};