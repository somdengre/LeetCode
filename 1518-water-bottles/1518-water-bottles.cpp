class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int empty = 0;
        int ans = 0;
        ans+=numBottles;
        empty = numBottles;
        while(empty >= numExchange ){
            ans += empty/numExchange;
            int rem = empty%numExchange;
            int q = empty/numExchange;
            empty = rem;
            empty+= q;
        }
        
        return ans;
    }
};