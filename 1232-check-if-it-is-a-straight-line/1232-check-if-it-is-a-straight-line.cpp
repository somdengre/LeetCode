class Solution {
public:

bool checkStraightLine(vector<vector<int>>& coordinates) {
     int a=coordinates[0][0]-coordinates[1][0];  
     int b=coordinates[0][1]-coordinates[1][1]; 
     for(int i=2;i<coordinates.size();i++)
     {
         int x=coordinates[i][0]; 
         int y=coordinates[i][1];
         if( a*(y-coordinates[0][1]) != b*(x-coordinates[0][0]) )
             return 0;
     }
         
 return 1;
 }
};