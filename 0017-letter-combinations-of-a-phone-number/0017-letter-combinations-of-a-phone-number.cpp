class Solution {
public:
    void f(int i,string&digits,vector<string>&ans,string&temp,vector<string>&v){
        if(temp.length() == digits.length()){
            ans.push_back(temp);
            return;
        }
        string p = v[digits[i] - '0'];
        for(int j = 0;j<p.length();j++){
            temp+=p[j];
            f(i+1,digits,ans,temp,v);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        if(digits.length() == 0)return ans;
        int i = 0;
        string s = "";
        
        f(0,digits,ans,s,v);
        return ans;
        
    }
};