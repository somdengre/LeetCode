class Solution {
public:
    string reverseWords(string s) {
        
        string ans = "";
        stack<char> p;
        for(int i = 0;i<s.length();i++){
            if(s[i] != ' '){
                p.push(s[i]);
                
            }
            else{
                while(!p.empty()){
                    ans+=p.top();
                    p.pop();
                }
                ans+=" ";
            }
            
            
            
            
            
        }
        while(!p.empty()){
                ans+=p.top();
                p.pop();
                
            }
        return ans;
    }
};