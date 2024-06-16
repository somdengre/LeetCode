class Solution {
public:
    string longestCommonPrefix(vector<string>& nums) {
        sort (nums.begin(),nums.end());
        string s = nums[0];
        string e = nums[nums.size()-1];
        string ans = "";
        int j = 0;
        while(j<s.length()){
            if(s[j] == e[j]){
                ans+=s[j];
            }else{
                return ans;
            }
            j++;
        }
        
        return ans;
    }
};