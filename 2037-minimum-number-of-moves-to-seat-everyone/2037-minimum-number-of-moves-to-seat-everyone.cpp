class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& nums) {
        int n =nums.size();
        int ans = 0;
        priority_queue<int> pq , student;
        
        for(int i = 0;i<n;i++){
            pq.push(seats[i]);
            student.push(nums[i]);
        }
        
        while(!pq.empty()){
            int a = pq.top();
            int b = student.top();
            pq.pop();
            student.pop();
            
            ans+=abs(a-b);
        }
        
        return ans;
    }
};