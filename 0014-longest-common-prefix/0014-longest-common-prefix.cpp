class Solution {
public:
    string longestCommonPrefix(vector<string>& nums) {
      int n = nums.size();
        sort(nums.begin(),nums.end());
        string ans = "";
        string s1 = nums[0];
        string s2 = nums[n-1];
        int i = 0,j = 0;
        while(i<s1.length() && j<s2.length()){
            if(s1[i] == s2[j]){
                ans+=s1[i];
            }else{
                break;
            }
            i++;
            j++;
        }
        return ans;
        
    }
};