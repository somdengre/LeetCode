class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long largest = 0,smallest = 0;
        vector<int>left(n,-1),right(n,n);
        stack<pair<int,int>>st;
        
        for(int i = 0;i<n;i++){
            while(!st.empty() && st.top().first > nums[i]){
                    st.pop();
            }
            if(!st.empty())left[i] = st.top().second;
            st.push({nums[i],i});
        }
        while(!st.empty())st.pop();
        for(int i = n-1;i>=0;i--){
            while(!st.empty() && st.top().first >= nums[i]){
                    st.pop();
            }
            if(!st.empty())right[i] = st.top().second;
            st.push({nums[i],i});
        }
        while(!st.empty())st.pop();
        for(int i = 0;i<n;i++){
            int lefts = i-left[i];
            int rights = right[i]-i;
            long long mul = lefts*rights;
            smallest+=(mul * nums[i]);
        }
        
        vector<int>leftr(n,-1),rightr(n,n);
        
        for(int i = 0;i<n;i++){
            while(!st.empty() && st.top().first < nums[i]){
                st.pop();
            }
            if(!st.empty())leftr[i] = st.top().second;
            st.push({nums[i],i});
        }
        while(!st.empty())st.pop();
        for(int i = n-1;i>=0;i--){
            while(!st.empty() && st.top().first <= nums[i]){
                    st.pop();
            }
            if(!st.empty())rightr[i] = st.top().second;
            st.push({nums[i],i});
        }
        
        for(int i = 0;i<n;i++){
            int lefts = i-leftr[i];
            int rights = rightr[i]-i;
            long long mul = lefts*rights;
            largest+=(mul* nums[i]);
        }
        
        return largest-smallest;
    }
};