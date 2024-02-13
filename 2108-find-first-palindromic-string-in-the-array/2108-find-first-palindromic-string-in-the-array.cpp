class Solution {
public:
    string firstPalindrome(vector<string>& nums) {
        string ans = "";
        
        for(int i = 0;i<nums.size();i++){
            int f = 0;
            int b = nums[i].size()-1;
            int z = 0;
            while(f<=b){
                if(nums[i][f] != nums[i][b]){
                    z = 1;
                    break;
                }
                f+=1;
                b-=1;
                
            }
            
            if(z == 0){
                ans = nums[i];
                break;
            }
        }
        
        return ans;
        
        
    }
};