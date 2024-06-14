

class Solution {
public:
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
        
        // Parse digits and handle overflow/underflow
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            ans = ans * 10 + (s[i] - '0');
            // Check for overflow
            if (sign * ans > INT_MAX) {
                return INT_MAX;
            }
            // Check for underflow
            if (sign * ans < INT_MIN) {
                return INT_MIN;
            }
            i++;
        }
        
        return (int)(sign * ans);
    }
};