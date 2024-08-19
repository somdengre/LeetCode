class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& com) {
        int i = 0;
        int j = 0;
        
        for(int p = 0;p<com.size();p++){
            if(com[p] == "UP"){
                i--;
            }else if(com[p] == "RIGHT"){
                j++;
            }else if(com[p] == "DOWN"){
                i++;
            }else{
                j--;
            }
        }
        
        return (i*n)+j;
    }
};