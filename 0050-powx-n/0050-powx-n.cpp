class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        int k = n;
        while (k) {
            if (k%2) res *= x;
            x *= x;            
            k /= 2;
        }
        return n > 0 ? res : 1/res;
    }
};