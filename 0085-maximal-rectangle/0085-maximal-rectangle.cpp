class Solution {
public:
     int largestRectangleArea(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n,0),right(n,0);
        stack<int>st;
        for(int i = 0;i<n;i++){
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            left[i] = st.empty() ? 0 : st.top()+1;
            st.push(i);
        }
        
        while(!st.empty()){
            st.pop();
        }
        for(int i = n-1;i>=0;i--){
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            right[i] = st.empty() ? n-1 : st.top()-1;
            st.push(i);
        }
        
        int ans = -1;
        
        for(int i = 0;i<n;i++){
            int a = (right[i]-left[i]+1) * nums[i];
            ans = max(ans,a);
        }
        
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& nums) {
        
        int ans = 0;
        int n = nums.size();
        int m = nums[0].size();
        vector<int>height(m,0);
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(nums[i][j] == '1'){
                    height[j]++;
                }else{
                    height[j] = 0;
                }
            }
            int area = largestRectangleArea(height);
            ans = max(ans,area);
        }
        
        return ans;
    }
};