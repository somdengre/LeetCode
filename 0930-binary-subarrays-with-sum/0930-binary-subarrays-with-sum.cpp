class Solution {
public:
    int numSubarraysWithSum(vector<int>& arr, int target) {
        unordered_map<int,int> mpp;
        int n=arr.size(), sum = 0, count = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum == target) count +=1;
            if(mpp[sum-target])   count += mpp[sum-target];
            mpp[sum]++;
        }
        return count;
    }
};