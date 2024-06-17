class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal)return true;
        if(s.length()!= goal.length())return false;
        string rotate = "";
        int n = s.length();
        for(int i = 0;i<n-1;i++){
            rotate.append(s,i+1,n-i+1);
            rotate.append(s,0,i+1);
            if(rotate == goal){
                return true;
            }else{
                rotate = "";
            }
        }
        
        return false;
    }
};