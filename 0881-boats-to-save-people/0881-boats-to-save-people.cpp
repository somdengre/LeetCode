class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        if(nums.size() == 1)return 1;
        sort(nums.begin(),nums.end());
        int i  = 0;
        int j = nums.size()-1;
        int c = 0;
        while(i<j){
            if(nums[j] == limit){
                c++;
                j--;
            }else if(nums[i] + nums[j] <= limit){
                c++;
                i++;
                j--;
            }else{
                c++;
                j--;
            }
        }
        
        if(i == j && nums[j] <= limit)c++;
        return c;
    }
};