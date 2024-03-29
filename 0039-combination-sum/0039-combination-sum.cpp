class Solution {
    
public: 
//     void find(int ind,int target,vector<int> &arr,vector<vector<int>> &ans, vector<int> &ds) {
//         if(ind == arr.size()){
//             if(target == 0){
//                 ans.push_back(ds);
//             }
//             return;
//         }
        
//         if(arr[ind]<=target){
//             ds.push_back(arr[ind]);
//             find(ind, target-arr[ind],arr,ans,ds);
//             ds.pop_back();
//         }
//         find(ind+1, target,arr,ans,ds);
//     }
    
    void find(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
        if(ind == arr.size()){
            if(target == 0){
                ans.push_back(ds);
                
            }
            return;
        }
        if(arr[ind]<= target){
            ds.push_back(arr[ind]);
            find(ind,target-arr[ind],arr,ans,ds);
            ds.pop_back();
            
        }
        
        find(ind+1,target,arr,ans,ds);
        
        
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        find(0,target,arr,ans,ds);
        return ans;
    }
};