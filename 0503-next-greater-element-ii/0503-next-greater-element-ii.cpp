class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        int n = nums.size();
        vector<int>ans(n,-1);
        for(int i = n-1;i>=0;i--){
            st.push(nums[i]);
        }
        
        for(int i = n-1;i>=0;i--){
            if(!st.empty() && nums[i] < st.top()){
                ans[i] = st.top();
                st.push(nums[i]);
            }else if(!st.empty() && nums[i] >= st.top()){
                while(!st.empty() && nums[i] >= st.top()){
                    st.pop();
                }
                if(st.empty()){
                    ans[i] = -1;
                    st.push(nums[i]);
                }else{
                    ans[i] = st.top();
                    st.push(nums[i]);
                }
            }else{
                ans[i] = -1;
                st.push(nums[i]);
            }
        }
        
        
        return ans;
    }
};