class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0;
        
        for(int i = 0;i<s.length();i++){
            set<char>st;
            for(int j = i;j<s.length();j++){
                if(st.find(s[j]) == st.end()){
                    st.insert(s[j]);
                    maxi = max(maxi,j-i+1);
                }else{ 
                    break;
                }
            }
        }
        
        return maxi;
    }
};