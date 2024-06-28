class StockSpanner {
public:
    stack<pair<int,int>>st;
    int ind = 0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        
        while(!st.empty() && st.top().first <= price){
            st.pop();
        }
        int z = 0;
        if(st.empty()){
            z = ind-0+1;
        }else{
            z = ind-st.top().second;
        }
        st.push({price,ind});
        ind++;
        return z;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */