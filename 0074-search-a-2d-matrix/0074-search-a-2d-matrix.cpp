class Solution {
public:
    
    bool bin(vector<int> & arr, int l,int h,int t){
        while(l<=h){
            int m = l+(h-l)/2;
            
            if(arr[m]==t){
                return true;
            }else if(arr[m]>t){
                h = m-1;
            }else{
                l = m+1;
            }
        }
        return false;
        
        
    };
    bool searchMatrix(vector<vector<int>>& mat, int x) {
        bool ans = false;
        int h = mat[0].size()-1;
        for(int i=0;i< mat.size();i++){
            ans = bin(mat[i],0,h,x);
            if(ans == true){
                return true;
            }
        }
        
        return false;
    }
};