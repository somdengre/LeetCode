class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)return 0;
        unordered_set<int>st;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            st.insert(nums[i]);
        }
        int cnt = 0;
        int maxi = 1;
        for(auto it: st){
            if(st.find(it-1) != st.end()){
                continue;
            }else{
                int cnt = 0;
                int p = it;
                while(st.find(p) != st.end()){
                    cnt++;
                    p++;
                }
                maxi = max(cnt,maxi);
            }
        }
        
        return maxi;
    }
};