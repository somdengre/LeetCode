class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        for(int i = 0;i<nums2.size();i++){
            mp[nums2[i]] = i;
        }
        
        int i = 0;
        while(i<nums1.size()){
            int p = nums1[i];
            int z = mp[p];
            int flag = 0;
            for(int j = z+1;j<nums2.size();j++){
                if(nums2[j] > p){
                    nums1[i] = nums2[j];
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                nums1[i] = -1;
            }
            i++;
        }
        
        return nums1;
    }
};