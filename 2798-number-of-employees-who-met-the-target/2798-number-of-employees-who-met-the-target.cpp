class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ans;
        sort(hours.begin(),hours.end());
        int p=hours.size();
        if(hours[p-1]<target){
            return 0;
        }
        int z = 0;
        for(int i=0;i<p;i++){
            if(hours[i]>=target){
                 z = i;
                break;
            }
        }
        
        return (p-z);
    }
};