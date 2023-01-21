class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        
        priority_queue<int> pq;
        
        for(int i=0;i<candies.size();i++){
            pq.push(candies[i]);
        }
        
        int r=pq.top();
        
        for(int j=0;j<candies.size();j++){
            if(candies[j]+extraCandies>=r){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        
        return ans;
    }
};