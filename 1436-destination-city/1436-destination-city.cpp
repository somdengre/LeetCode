
class Solution {
public:
        string destCity(vector<vector<string>>& paths) {
        vector<string>a;
        vector<string>b;
        for(int i=0;i<paths.size();i++){
            a.push_back(paths[i][0]);
            b.push_back(paths[i][1]);
        }
        for(int i=0;i<b.size();i++){
            bool flag=true;
            for(int j=0;j<a.size();j++){
                if(b[i]==a[j]) {
                    flag=false;
                    break;
                }
            }
            if(flag==true) return b[i];
        }
        return "";
    }


};