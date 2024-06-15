class Solution {
public:
    void f(int i,int n,int k,vector<vector<int>>&ans,vector<int>&temp,int&sum){
        if(temp.size() == k){
            if(sum == n){
                ans.push_back(temp);
                return;
            }
            return;
        }
        
        for(int ind = i;ind<=9;ind++){
            sum+=ind;
            temp.push_back(ind);
            f(ind+1,n,k,ans,temp,sum);
            temp.pop_back();
            sum-=ind;
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        int sum = 0;
        f(1,n,k,ans,temp,sum);
        return ans;
    }
};