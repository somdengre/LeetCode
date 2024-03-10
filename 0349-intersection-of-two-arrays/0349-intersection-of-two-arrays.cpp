class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i = 0;
        int j = 0;
        
        while(i != nums1.size() && j!= nums2.size()){
            if(nums1[i] == nums2[j]){
                ans.push_back(nums1[i]);
                while(i+1<nums1.size() && nums1[i+1] == nums1[i]){
                    i = i+1;
                }
                
                while(j+1<nums2.size() && nums2[j+1] == nums2[j]){
                    j = j+1;
                }
                i++;
                j++;
                
            }
            else if(nums1[i]>nums2[j]){
                j = j+1;
            }
            else{
                i = i+1;
            }
        }
        
        return ans;
    }
};