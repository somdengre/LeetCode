class Solution {
public:
    void f(int i,string s,long long &temp,int neg){
        if(i >= s.length())return;
        if(s[i] < '0' || s[i] > '9'){
            return;
        }
        if(neg == -1 && -temp <= INT_MIN)return ;
        if(neg == 1 && temp >= INT_MAX )return;
        temp = temp*10 + s[i]-'0';
        
        
        return f(i+1,s,temp,neg);
    }
    int myAtoi(string s) {
       int n = s.length();
        int i = 0;
        
        while(i<n && s[i] == ' '){
            i++;
        }
        int neg = 1;
        if(i< n && s[i] == '-' || s[i] == '+'){
            if(s[i] == '-'){
                neg = -1;
            }
            i++;
        }
        long long temp = 0;
        // while(i<n && s[i] >= '0' && s[i] <= '9'){
        //     temp = temp*10 + (s[i]-'0');
        //     i++;
        //     if(neg == -1 && -temp < INT_MIN)return INT_MIN;
        //     if(neg == 1 && temp > INT_MAX)return INT_MAX;
        // }
        f(i,s,temp,neg); 
        if(neg == -1 && -temp <= INT_MIN)return INT_MIN;
        if(neg == 1 && temp >= INT_MAX )return INT_MAX;
        if(neg == -1){
            return -1*temp;
        }
        return temp;
    }
};