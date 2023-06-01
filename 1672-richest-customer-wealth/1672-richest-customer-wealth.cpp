class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=0;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            
            for(int j=0; j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            n=max(n,sum);
        }
        return n;
    }
};