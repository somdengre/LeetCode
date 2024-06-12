class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int t = n+m;
        int ind2 = t/2;
        int ind1 = (t/2)-1;
        int i = 0;
        int j = 0;
        int cnt = 0;
        int ele1 = -1;
        int ele2 = -1;
        
        while(i<n && j<m){
            if(nums1[i] < nums2[j]){
                if(cnt == ind1)ele1 = nums1[i];
                if(cnt == ind2)ele2 = nums1[i];
                cnt++;
                i++;
            }else{
                if(cnt == ind1)ele1 = nums2[j];
                if(cnt == ind2)ele2 = nums2[j];
                cnt++;
                j++;
            }
        } 
        
        while(i<n){
            if(cnt == ind1)ele1 = nums1[i];
            if(cnt == ind2)ele2 = nums1[i];
            cnt++;
            i++;
        }
        
        while(j<m){
            if(cnt == ind1)ele1 = nums2[j];
            if(cnt == ind2)ele2 = nums2[j];
            cnt++;
            j++;
        }
        
        if((t)%2 == 1){
            return ele2;
        }else {
            return (double)((double)(ele2 + ele1))/2.0;
        }
    }
};