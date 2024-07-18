class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size(),size = n+m;
        
        int i = 0,j = 0,cnt = 0;
        int i2 = size/2,i1 = i2-1;
        int i1el = -1,i2el = -1;
        
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                if(cnt == i1)i1el = nums1[i];
                if(cnt == i2)i2el = nums1[i];
                cnt++;
                i++;
            }else{
                if(cnt == i1)i1el = nums2[j];
                if(cnt == i2)i2el = nums2[j];
                cnt++;
                j++;
            }
        }
        
        while(i<n){
            if(cnt == i1)i1el = nums1[i];
            if(cnt == i2)i2el = nums1[i];
            cnt++;
            i++;
        }
        
        while(j<m){
            if(cnt == i1)i1el = nums2[j];
            if(cnt == i2)i2el = nums2[j];
            cnt++;
            j++;
        }
        
        if(size %2 == 1)return i2el;
        
        return (double)(i1el+i2el)/2.0;
    }
};