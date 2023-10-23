class Solution {
public:
    void reverseString(vector<char>& s) {
        
        stack<char>p;
        
        for(int i=0;i<s.size();i++){
            p.push(s[i]);
            
        }
        s.clear();
        while(!p.empty()){
            s.push_back(p.top());
            p.pop();
        }
        
        
    }
};