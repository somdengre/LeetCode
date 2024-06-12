class Solution {
public:
    int INF = -100000000;
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()){
            return findMedianSortedArrays(nums2, nums1);
        }

        int l1 = nums1.size(), l2 = nums2.size();
        int low = 0, high = l1, partition1, partition2;
        int maxL1, maxL2, minR1, minR2;
        float ret = 0.0;

        while(low <= high){
            partition1 = (low+high)/2;
            partition2 = ((l1+l2+1)/2) - partition1;

            maxL1 = (partition1 == 0) ? INF : nums1[partition1 - 1];
            minR1 = (partition1 == l1) ? -INF : nums1[partition1];
            maxL2 = (partition2 == 0) ? INF : nums2[partition2 - 1]; 
            minR2 = (partition2 == l2) ? -INF : nums2[partition2];

            //cout<<partition1<<" "<<partition2<<" "<<maxL1<<" "<<minR1<<" "<<maxL2<<" "<<minR2<<endl;
            if(maxL1 <= minR2 && maxL2 <= minR1){
                if((l1+l2)%2 == 0) ret = (max(maxL1, maxL2) + min(minR1, minR2))*1.0/ 2.0;
                else ret = max(maxL1, maxL2);

                return ret;
            } else if(maxL1 > minR2) 
                high = partition1 - 1;
            else 
                low = partition1 + 1;        
        }
        
        return ret;
    }
};