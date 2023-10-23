class Solution {
public:
    string removeStars(string s) {
        stack<char> p;
        string ans = "";
        for(int i = 0;i<s.length();i++){
            
            if(s[i] == '*'){
                p.pop();
                continue;
            }else{
                p.push(s[i]);
            }
        }
        
        while(!p.empty()){
            ans+=p.top();
            p.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};