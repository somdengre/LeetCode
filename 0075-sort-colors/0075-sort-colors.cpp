class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int i = 0;
        for(auto it: mp){
            int t = it.second;
            while(t){
                nums[i] = it.first;
                i++;
                t--;
            }
        }
        
        
    }
};