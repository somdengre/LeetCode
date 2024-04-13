class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int z = n/3;
        sort(nums.begin(),nums.end());
        int t = nums[0];
        int cnt = 0;
        for(int i = 0;i<n;i++){
            
            if(t == nums[i]){
                cnt++;
            }else{
                if(cnt > z){
                    ans.push_back(t);
                }
                t = nums[i];
                cnt = 1;
            }
        }
        if(cnt > z){
            ans.push_back(t);
        }
        return ans;
    }
};