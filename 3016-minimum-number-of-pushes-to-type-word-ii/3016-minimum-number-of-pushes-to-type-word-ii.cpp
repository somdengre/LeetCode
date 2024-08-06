class Solution {
public:
    int minimumPushes(string s) {
        int n = s.length(),ans = 0;
        vector<int>temp(26,0);
        
        for(int i = 0;i<n;i++){
            temp[s[i]-'a']++;
        }
        
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        
        for(int i = 0;i<26;i++){
            if(i<8){
                ans+=temp[i]*1;
            }else if(i<16){
                ans+=temp[i]*2;
            }else if(i<24){
                ans+=temp[i]*3;
            }else{
                ans+=temp[i]*4;
            }
        }
        
        return ans;
    }
};