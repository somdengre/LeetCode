class Solution {
public:
    bool canBeEqual(vector<int>& nums, vector<int>& arr) {
        unordered_map<int,int>mp;
        
        for(auto it: nums){
            mp[it]++;
        }
        
        for(int i = 0;i<arr.size();i++){
            if(mp.find(arr[i]) != mp.end()){
                mp[arr[i]]--;
                if(mp[arr[i]] == 0){
                    mp.erase(arr[i]);
                }
            }else{
                return false;
            }
        }
        
        return true;
    }
};