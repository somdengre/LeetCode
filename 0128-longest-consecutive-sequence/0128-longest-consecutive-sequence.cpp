class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        set<int>st;
        for(int i = 0;i<n;i++){
            st.insert(nums[i]);
        }
        
        for(auto it: st){
            if(st.find(it-1) == st.end()){
                int p = it;
                int cnt= 0;
                while(st.find(p) != st.end()){
                    cnt++;
                    p++;
                }
                maxi = max(maxi,cnt);
            }
        }
        
        return maxi;
    }
};