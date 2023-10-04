class Solution {
public:
    vector<int> minOperations(string s) {
        vector<int> ans;
        for(int i=0;i<s.length();i++){
            int p = 0;
            for(int j=0;j<s.length();j++){
                if(i!=j && s[j] == '1' ){
                    p+= abs(i-j);
                }
            }
            ans.push_back(p);
        }
        return ans;
    }
};