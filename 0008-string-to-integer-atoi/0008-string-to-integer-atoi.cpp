

class Solution {
public:
    int f(int i,string &s,long long &ans,int sign){
        if(i >=s.length())return (int)ans;
        
        if(s[i] < '0' || s[i] > '9')return (int)ans;
        
        ans = ans*10 + s[i]-'0';
        if(sign * ans > INT_MAX)return INT_MAX;
        if(sign*ans < INT_MIN)return INT_MIN; 
        return f(i+1,s,ans,sign);
    }
    int myAtoi(string s) {
        int n = s.length();
        int i = 0;
        long long ans = 0;
        int sign = 1;
        
        // Skip leading whitespaces
        while (i < n && s[i] == ' ') {
            i++;
        }
        
        // Check for sign
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        ans = f(i,s,ans,sign);
        return (int)(sign * ans);
    }
};