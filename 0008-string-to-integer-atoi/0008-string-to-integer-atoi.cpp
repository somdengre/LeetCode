class Solution {
public:
    int f(int i,long long &ans,string&s,int sign){
        if(i >=s.length()){
            return (int)ans;
        }
        
        if(s[i] < '0' || s[i] > '9'){
            return (int)ans;
        }
        
        ans = ans*10 + s[i]-'0';
        
        if(ans*sign > INT_MAX)return INT_MAX;
        if(ans*sign<INT_MIN)return INT_MIN;
        
        return f(i+1,ans,s,sign);
    }
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        int sign = 1;
        while(i<n && s[i] == ' '){
            i++;
        }
        
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }
        
        long long ans = 0;
        ans = f(i,ans,s,sign);
        return (int)(ans*sign);
    }
};