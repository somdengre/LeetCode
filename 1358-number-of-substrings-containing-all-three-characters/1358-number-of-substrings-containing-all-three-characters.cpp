class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        vector<int>temp(3,-1);
        int cnt = 0;
        for(int i = 0;i<n;i++){
            temp[s[i]-'a'] = i;
            if(temp[0]!= -1 && temp[1]!=-1 && temp[2]!=-1){
                cnt+= 1+min(temp[0],min(temp[1],temp[2]));
            }
        }
        
        return cnt;
    }
};