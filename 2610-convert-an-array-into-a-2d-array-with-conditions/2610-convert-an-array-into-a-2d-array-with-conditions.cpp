

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>r;
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]] == 0)r.push_back(nums[i]);
            
            mp[nums[i]]++;
        }
        
        
        int max = 0;
        
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]> max) max = mp[nums[i]];
        }
        
        for(int i=0;i<max;i++){
            vector<int> temp;
            
            for(int j=0;j<r.size();j++){
                if(mp[r[j]]>0){
                    temp.push_back(r[j]);
                    mp[r[j]]--;
                }
            }
            
            ans.push_back(temp);
        }
        
        return ans;
        
        
        
    }
};




        
       