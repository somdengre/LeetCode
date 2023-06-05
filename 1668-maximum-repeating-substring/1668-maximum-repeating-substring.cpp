class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int count = 0;
        string temp = word;
        while(sequence.find(temp)!=-1){
            temp+=word;
            count++;
        }
        return count;
    }
};