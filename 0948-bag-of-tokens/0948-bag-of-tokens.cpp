class Solution {
public:
    int bagOfTokensScore(vector<int>& nums, int power) {
        sort(nums.begin(),nums.end());
        int l = 0;
        int r= nums.size()-1;
        int maxi = 0;
        int s = 0;
        
        while(l<=r){
            if(nums[l]<=power){
                s++;
                
                power-=nums[l];
                l++;
                maxi = max(s,maxi);
            }else if(s>0){
                power+=nums[r];
                r--;
                s--;
            }
            else{
                break;
            }
        }

        return maxi;
    }
};