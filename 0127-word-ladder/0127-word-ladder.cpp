class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        set<string>st(wordList.begin(),wordList.end());
        st.erase(beginWord);
        
        while(!q.empty()){
            string temp = q.front().first;
            int steps = q.front().second;
            if(temp == endWord)return steps;
            q.pop();
            
            for(int i = 0;i<temp.length();i++){
                char original = temp[i];
                for(char ch = 'a';ch<='z';ch++){
                    temp[i] = ch;
                    if(st.find(temp) != st.end()){
                        q.push({temp,steps+1});
                        st.erase(temp);
                    }
                }
                temp[i] = original;
            }
        }
        
        return 0;
    }
};