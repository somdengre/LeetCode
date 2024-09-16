class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int n = nums.size();
        stack<int>st;
        
        for(int i = 0;i<n;i++){
            if( nums[i] > 0 || st.empty() ){
                st.push(nums[i]);
            }else{
                while(!st.empty() && st.top() > 0 && st.top() < abs(nums[i])){
                    st.pop();
                }
                if(!st.empty() && abs(nums[i]) == st.top()){
                    st.pop();
                }else{
                    if(st.empty() || st.top() < 0){
                        st.push(nums[i]);
                    }
                }
            }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};