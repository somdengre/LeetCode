class Solution {
public:
    int binary_search(int num,int l,int r,vector<int>& numbers, int target){ 
        int mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(numbers[mid]==num) return mid;
            else if(numbers[mid]>num) r=mid-1;
            else l=mid+1;
        }
        return -1; 
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        for (int i=0;i<numbers.size();i++){
            int j=binary_search(target-numbers[i],i+1,numbers.size()-1,numbers,target);
            if(j!=-1){ 
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
        }      
        return ans; 
    }
    
};