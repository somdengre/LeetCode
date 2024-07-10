class Solution {
public:
    int minOperations(vector<string>& logs) {
        int x = 0;
        int n = logs.size();
        for(int i = 0;i<n;i++){
            if(logs[i] == "../"){
                x--;
                if(x<0)x = 0;
            }else if(logs[i] == "./"){
                continue;
            }else{
                x++;
            }
        }
        
        return x;
    }
};