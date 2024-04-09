class Solution {
public:
    int timeRequiredToBuy(vector<int>& nums, int k) {
        queue<pair<int,int>>q;
        
        for(int i = 0;i<nums.size();i++){
            q.push({i,nums[i]});
        }
        int ans  = 0;
        while(true){
            int ind = q.front().first;
            int t = q.front().second;
            q.pop();
            if(k == ind){
                if(t == 0)return ans;
                t--;
                ans++;
                if(t == 0){
                   break; 
                }else{
                    q.push({k,t});
                }
            }else if(t == 0){
                continue;
            }else{
                t--;
                ans++;
                q.push({ind,t});
            }
        }
        return ans;
    }
    
    
    
};