class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int el = -1;
        
        for(int i = 0;i<n;i++){
            if(cnt == 0){
                el = nums[i];
                cnt++;
            }else if(nums[i] == el){
                cnt++;
            }else{
                cnt--;
            }
        }
        
        for(int i = 0;i<n;i++){
            if(nums[i] == el){
                cnt++;
            }
        }
        if(cnt >= n/2)return el;
        return el;
    }
};