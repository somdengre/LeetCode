class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        vector<int>temp;
        temp = nums;
        
        for(int i = 0;i<nums.size();i++){
            temp.push_back(nums[i]);
        }
        
        for(int i = 0;i<nums.size();i++){
            int x = temp[i];
            int j = i+1;
            
            while(j<temp.size()){
                if(temp[j]>x){
                    x = temp[j];
                    break;
                }
                j++;
            }
            
            if(x!=temp[i])ans.push_back(x);
            else ans.push_back(-1);
        }
        
        return ans;
    }
};


