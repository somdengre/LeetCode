class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        stack<int>st;
        
        for(int i = 0;i<students.size();i++){
            q.push(students[i]);
        }
        
        for(int i = students.size()-1;i>=0;i--){
            st.push(sandwiches[i]);
        }
        int x = 0;
        while(!q.empty()){
            
            if(st.top() == q.front()){
                q.pop();
                st.pop();
                x = 0;
            }else{
                if(x == q.size()){
                    return q.size();
                }
                int p = q.front();
                q.pop();
                q.push(p);
                x++;
            }
            
        }
        
        return 0; 
        
    }
};
