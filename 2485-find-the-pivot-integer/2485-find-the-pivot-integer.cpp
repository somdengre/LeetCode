class Solution {
public:
    int pivotInteger(int n) {
        int m = (n + n * n) / 2;
        
        int q = sqrt(m);
        if ( q * q == m)
            return q;

        return -1;
    }
};