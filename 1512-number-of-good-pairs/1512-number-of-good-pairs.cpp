class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int z = nums.size();
        int q=0;
        for(int i=0;i<z;i++){
            for(int j=i+1;j<z;j++){
                if((nums[i] == nums[j]) && (i!=j)){
                    q++;
                }
            }
        }
        return q;
    }
};