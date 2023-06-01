class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        vector<int> ans;
        int k=0;
        int r=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        for(int j=0;j<nums.size();j++){
            if(j%2==0){
                ans.push_back(pos[k]);
                k++;
            }else{
                ans.push_back(neg[r]);
                r++;
            }
        }
        return ans;
    }
};