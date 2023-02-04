class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        for(int i=1;i<arr.size();i++)
        {
            arr[i] += arr[i-1];
        }
        int ans = 0;
        ans += arr[arr.size()-1];
        
        for(int j=2;j<arr.size();j+=2)
        {
            for(int i=j;i<arr.size();i++)
            {
                ans += arr[i];
                if(i-(j+1)>=0)
                {
                    ans -= (arr[i-(j+1)]);
                }
            }
        }
        
        
        return ans;
    }
};