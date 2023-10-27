class Solution {
 public:
  int climbStairs(int n) {
    int p = 1;
    int p1 = 1;
      
      for(int i = 2;i<= n ;i++){
          int dp = p+p1;
          p1 = p;
          p = dp;
      }
      
      return p;
  }
};