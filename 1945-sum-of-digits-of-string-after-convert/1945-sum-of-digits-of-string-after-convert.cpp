class Solution {
public:
    int getLucky(string s, int k) {
        int n = s.length();
        int sum = 0;
        
        for(int i = 0;i<n;i++){
            int p = s[i]-'a'+1;
            while(p){
                sum+=p%10;
                p = p/10;
            }
        }
        while(k-1){
            int num = sum;
            int newn = 0;
            while(num){
                newn+=num%10;
                num = num/10;
            }
            sum = newn;
            k--;
        }
        
        return sum;
    }
};