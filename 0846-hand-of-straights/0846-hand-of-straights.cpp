class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int p) {
        if((nums.size())%p != 0)return false;
        map<int,int>mp;
        
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        while(!mp.empty()){
            int z = mp.begin()->first;
            for(int i = 0;i<p;i++){
                if(mp.find(z+i) == mp.end()){
                    return false;
                }
                mp[z+i]--;
                if(mp[z+i] == 0){
                    mp.erase(z+i);
                }
            }
        }
        
        return true;
    }
};