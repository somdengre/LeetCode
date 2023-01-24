class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int p=0,q=0;
        
        for(int i=0;i<sentences.size();i++){
            for(int j=0;j<sentences[i].length();j++)
            {
                if(sentences[i][j]==' '){
                    q++;
                }
            }
            q++;
            if(p<q){
                p=q;
            }
            q=0;
        }
        
        return p;
    }
};