class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        map<int,int> mp;
        int ans;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>=10){
                int p = nums[i];
                int num = 0;
                while(p>0){
                    num = num * 10 +(p%10);
                    p = p/10;
                    
                }
                mp[num]++;
            }
        }
        
        return mp.size();
    }
};


// class Solution {
// public:
//     int reverseNum(int temp)
//    {
//             int num=0;
//             while(temp>0)
//             {
//                 num=num*10+(temp%10);
//                 temp=temp/10;
//             }
//             return num;   
//    }
//     int countDistinctIntegers(vector<int>& nums) {
//         unordered_map<int,int> mp;
//         for(int i=0;i<nums.size();i++)
//         {
//             mp[nums[i]]++;
//             int num=reverseNum(nums[i]);
//             mp[num]++;
//         }
//         return mp.size();
//     }
// };