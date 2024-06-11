class Solution {
public:
    int noOfStudents(vector<int>&nums,int pages){
    int students = 1;
    int pstudent = 0;

    for(int i = 0;i<nums.size();i++){
        if(pstudent + nums[i] <= pages){
            pstudent+=nums[i];
        }else{
            students++;
            pstudent = nums[i];
        }
    }
    return students;
}
int findPages(vector<int>&nums, int n, int m) {
    if(m>n)return -1;
    int maxi = INT_MIN;
    int sum = 0;
    for(int i = 0;i<n;i++){
        maxi = max(maxi,nums[i]);
        sum+=nums[i];
    }

    int low = maxi;
    int high = sum;
    int ans = 0;
    while(low<=high){
        int mid  = (low+high)/2;
        int students = noOfStudents(nums,mid);
        if(students > m){
           
            low = mid+1;
        } else{
            ans = mid;
            high = mid-1;
        }
    }

    return ans;
}
    int splitArray(vector<int>& nums, int k) {
        return findPages(nums,nums.size(),k);
    }
};