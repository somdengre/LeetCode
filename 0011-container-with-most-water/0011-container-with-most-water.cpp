class Solution {
public:
    int maxArea(vector<int>& h) {
        int j = h.size()-1;
        int ans = 0;
        int area = 0;
        int i=0;
        while(i<j){
            area = (j-i)*min(h[i],h[j]);
            ans = max(ans,area);
            
            if(h[i]<h[j]){
                i++;
            }else{
                j--;
            }
        }
        
        return ans;
        
        
    }
};