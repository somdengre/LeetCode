class Solution {
public:
    void f(int ind,vector<vector<int>>&ans,vector<int>&temp,int k,int n){
        if(n == 0 && k == 0){
            ans.push_back(temp);
            return;
        }
        
        for(int i = ind;i<=9;i++){
            if(i>n)break;
            if(k == 0)break;
            temp.push_back(i);
            f(i+1,ans,temp,k-1,n-i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        f(1,ans,temp,k,n);
        return ans;
    }
};