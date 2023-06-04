class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int j=0;
        int sum=0;
        int count = 0;
        
        for(int i=0;i<arr.size();i++){
           sum+=arr[i];
            if(i-j+1 == k){
                if(sum/k >= threshold){
                    count++;
                }
                sum-=arr[j];
                j++;
            }
            
        }
        
        return count;
    }
};
