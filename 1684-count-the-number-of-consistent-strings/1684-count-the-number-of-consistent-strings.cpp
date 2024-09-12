class Solution {
public:
    int countConsistentStrings(string t, vector<string>& nums) {
        map<char,int>mp;
        for(int i = 0;i<t.length();i++){
            mp[t[i]]++;
        }
        int n = nums.size(),cnt = 0;
        for(int i = 0;i<n;i++){
            string temp = nums[i];
            int m = temp.length(),fl = 0;
            for(int j = 0;j<m;j++){
                if(mp.find(temp[j]) == mp.end()){
                    fl = 1;
                    break;
                }
            }
            if(fl == 0)cnt++;
        }
        
        return cnt;
    }
};