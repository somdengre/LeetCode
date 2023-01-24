class Solution {
public:
    string interpret(string command) {
        string ans;
        
        for(int i=0;i<command.length();i++){
            if(command[i]=='G'){
                ans = ans+'G';
            };
            if(command[i] =='('){
                if(command[i+1] == ')'){
                    ans = ans+"o";
                }
                else{
                    ans=ans+"al";
                }
            };
            
            
        }
        return ans;
    }
};