class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int maxi = 0;
        for(int i =  0;i<n;i++){
            vector<int>hash(26,0);
            int maxfre = 0;
            for(int j = i;j<n;j++){
                hash[s[j]-'A']++;
                maxfre = max(maxfre,hash[s[j]-'A']);
                int changes = (j-i+1)-maxfre;
                if(changes <= k){
                    maxi = max(maxi,j-i+1);
                }else{
                    break;
                }
            }
        }
        
        return maxi;
    }
};