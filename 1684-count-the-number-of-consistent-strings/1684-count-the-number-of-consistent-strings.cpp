class Solution {
public:
    int countConsistentStrings(string a, vector<string>& words) {
        set<char> s;
        

        int ans=0;
        s.insert(a.begin(),a.end());
        
        
        for(int j=0;j<words.size();j++){
            for(int i=0;i<words[j].length();i++){
                // cout<<words[j][i]<<" ";
                if(s.find(words[j][i])==s.end()){
                    break;
                }
                if(i==words[j].length()-1){
                ans++;
                }
            }
            // cout<<endl;
        }
        
        return ans;
        
        
        
    }
};