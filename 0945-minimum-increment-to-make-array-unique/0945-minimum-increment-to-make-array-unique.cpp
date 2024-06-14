class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        map<int,int>mp;
        int n = nums.size();
        int cnt = 0;
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }
        
        for(auto it:mp){
            int p = it.second-1;
            if(p>0){
                mp[it.first + 1]+=p;
            }
            cnt+=p;
        }
        
        return cnt;
    }
};