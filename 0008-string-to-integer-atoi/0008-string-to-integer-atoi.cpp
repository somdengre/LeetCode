class Solution {
public:
    int f(string s,int i,long long &ans,int sign){
        if(i>=s.length())return (int)ans;
        if(s[i] < '0' || s[i] > '9'){
            return (int)ans;
        }
        ans = ans*10+(s[i]-'0');
        
        if(ans*sign >= INT_MAX)return INT_MAX;
        if( ans*sign <= INT_MIN)return INT_MIN;
        
        return f(s,i+1,ans,sign);
    }
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        while(i<n && s[i] == ' '){
            i++;
        }
        int sign = 1;
        if(i<n && (s[i] == '+' || s[i] == '-')){
            if(s[i] == '+'){
                sign = 1;
            }else {
                sign = -1;
            }
            i++;
        }
        
        long long  ans = 0;
        ans = f(s,i,ans,sign);
        return (int)(ans*sign);
    }
};