class StockSpanner {
public:
    stack<pair<int,int>> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int r = 1;
        while(s.size()&&s.top().first<=price){
            r+=s.top().second;
            s.pop();
            
        }
        s.push({price,r});
        return r;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

