class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        int a=*max_element(nums1.begin(),nums1.end());
        int b=*max_element(nums2.begin(),nums2.end());
        int c=*max_element(nums3.begin(),nums3.end());
        int d=max(a,max(b,c));
        unordered_set<int>s1(nums1.begin(),nums1.end());
        unordered_set<int>s2(nums2.begin(),nums2.end());
        unordered_set<int>s3(nums3.begin(),nums3.end());

        int arr[d+1];
        memset(arr,0,sizeof(arr));
        for(auto it=s1.begin();it!=s1.end();it++)
        {
            arr[*it]++;
        }
        for(auto it=s2.begin();it!=s2.end();it++)
        {
            arr[*it]++;
        }
        for(auto it=s3.begin();it!=s3.end();it++)
        {
            arr[*it]++;
        }
        vector<int>ans;
        for(int i=0;i<=d;i++)
        {
            if(arr[i]>=2)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};