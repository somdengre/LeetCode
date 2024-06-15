class Solution {
public:
    bool isPalindrome(string&s,int start,int end){
        while(start<=end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void f(int i,string&s, vector<vector<string>>&ans,vector<string>&temp){
        if(i == s.length()){
            ans.push_back(temp);
            return;
        }
        
        for(int ind = i;ind<s.length();ind++){
            if(isPalindrome(s,i,ind)){
                temp.push_back(s.substr(i,ind-i+1));
                f(ind+1,s,ans,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        f(0,s,ans,temp);
        return ans;
    }
};