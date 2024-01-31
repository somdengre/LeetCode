class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>ans(temp.size(),0);
        stack<int>st;
        for(int i = temp.size()-1;i>=0;i--){
            
            while(st.size() && temp[i]>=temp[st.top()]){
                st.pop();
            }
            if(st.size()){
                ans[i] = st.top()-i;
            }
            
            st.push(i);
        }
        
        return ans;
    }
};