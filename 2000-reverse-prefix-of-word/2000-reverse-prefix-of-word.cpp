class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();

        //create a list to store the characters before the CHARACTER(ch)
        vector<char> pre;

        // suf will store the remaining suffix if there is any 
        string suf = ""; 
        
        for(int i=0; i<n; i++) {
            pre.push_back(word[i]);

            // check if the current character is the character wanted
            if(word[i] == ch) {
                // if so then put the remaining character to suf and break the loop
                suf = word.substr(i+1, n-1);
                break; 
            }
            // if the wanted character is not found, then just leave the pre empty in case it is easy to check
            if(i+1 == n) pre.clear(); 
        }
        reverse(pre.begin(), pre.end());  //reverse the pre
        string res(pre.begin(), pre.end());  //convert the pre to string res
        res+=suf; //add the remaining suf if there is any
        return pre.size() == 0 ? word : res;  //return `word` itself if pre is empty which means the wanted character is not found or return `res`
    }
};