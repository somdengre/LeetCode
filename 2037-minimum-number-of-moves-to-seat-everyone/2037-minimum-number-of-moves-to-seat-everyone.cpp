class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& nums) {
        int n =nums.size();
        int ans = 0;
        
        sort(seats.begin(),seats.end());
        sort(nums.begin(), nums.end());
        for(int i = 0;i<n;i++){
            ans+=abs(nums[i] - seats[i]);
        }
        
        return ans;
    }
};