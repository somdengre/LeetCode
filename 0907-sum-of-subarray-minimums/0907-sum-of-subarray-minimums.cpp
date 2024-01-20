class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int sum=0;
        for(int i=0; i<n; i++){
            int curr_index=i;
            int x=0;
            int y=0;
            while(curr_index>=1){
                if(arr[curr_index-1]>arr[i]){
                    y++;
                    curr_index--;
                }
                else
                    break;
            }
            curr_index=i;
            while(curr_index<n-1){
                if(arr[i]<=arr[curr_index+1]){
                    x++;
                    curr_index++;
                }
                else
                    break;
            }
            int m = 1000000007;
            long long r = (((x+1)%m)*((y+1)%m))%(1000000007);
            long long p = (r*(arr[i]))%(1000000007);
            sum = (sum+p)%(1000000007);
        }
        return sum;
    }
};