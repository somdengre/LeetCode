class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        ans.push_back({1});
        if(n == 1)return ans;
        ans.push_back({1,1});
        if(n == 2)return ans;
        
        for(int i = 3;i<=n;i++){
            vector<int>temp(i);
            temp[0] = 1;
            for(int j = 1;j<i-1;j++){
                temp[j] = ans[i-2][j]+ans[i-2][j-1];
            }
            temp[i-1] = 1;
            ans.push_back(temp);
        }
        
        return ans;
    }
};