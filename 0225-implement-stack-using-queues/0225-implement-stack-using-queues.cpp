class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        for(int i = 1;i<q.size();i++){
            q.push(q.front());
            q.pop();
        }
        
        int p = q.front();
        q.pop();
        return p;
    }
    
    int top() {
        for(int i = 1;i<q.size();i++){
            q.push(q.front());
            q.pop();
        }
        int p = q.front();
        q.pop();
        q.push(p);
        return p;
        
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */