class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int p;;
        priority_queue<int> maxh;
        
        for(int i=0;i<stones.size();i++){
            maxh.push(stones[i]);
        }
        
        while(maxh.size()>1){
            int a = maxh.top();
            maxh.pop();
            int b = maxh.top();
            maxh.pop();
            maxh.push(abs(a-b));
        }
        
        return maxh.top();
    }
};