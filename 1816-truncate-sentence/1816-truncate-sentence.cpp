class Solution {
public:
    string truncateSentence(string s, int k) {
        int i=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]==' ')
            {
                i++;
            }
            if(i==k)
            {
                i=j;
                break;
            }
        }
        if(i<k)return s;
        s.erase(s.begin()+i,s.end());
        return s;
    }
};
