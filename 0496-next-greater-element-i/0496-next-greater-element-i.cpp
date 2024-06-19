class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        int n =nums2.size();
        int m = nums1.size();
        for(int i = 0;i<n;i++){
            int next = -1;
            for(int j = i+1;j<n;j++){
                if(nums2[j] > nums2[i]){
                    next = nums2[j];
                    break;
                }
                
            }
            mp[nums2[i]] = next;
        }
        for(int i = 0;i<m;i++){
            nums1[i] = mp[nums1[i]];
        }
        
        return nums1;
    }
};