class Solution {
public:
    string longestCommonPrefix(vector<string>& nums) {
        int n = nums.size();
        string temp = nums[0];
        string ans = "";
        int j = 0;
        int m = temp.length();
        while(j<m){
            int cnt = 0;
            for(int i = 1;i<n;i++){
                if(temp[j] == nums[i][j]){
                    cnt++;
                }
            }
            if(cnt == n-1){
                ans+=temp[j];
            }else{
                break;
            }
            j++;
        }
        
        return ans;
    }
};