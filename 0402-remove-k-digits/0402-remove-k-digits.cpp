class Solution {
public:
    string removeKdigits(string nums, int k) {
        int n = nums.size();
        if(k == n)return "0";
        
        stack<char>st;
        
        for(int i =0;i<n;i++){
            while(!st.empty() && st.top() > nums[i] && k>0){
                st.pop();
                k--;
            }
            
            if(!st.empty() || nums[i]!= '0'){
                st.push(nums[i]);
            } 
             
        }
         while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        if(st.empty()){
            return "0";
        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};