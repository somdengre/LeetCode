class Solution {
public:
    int findTheWinner(int n, int k) {
        int z = 0;  
        for (int i = 1; i <= n; ++i) {
            z = (z + k) % i;
        }
        return z + 1; 
    }
};