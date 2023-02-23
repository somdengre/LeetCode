class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = nums.size()-1;
        while(i<=j)
        {
            if(nums[j]==val)
            {
                j--;
            }
            else if(nums[i]==val)
            {
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
            else if(nums[i]!=val)
            {
                i++;
            }
        }
        int k;
        bool found = false;
        for(k=0;k<nums.size();k++)
        {
            if(nums[k]==val)
            {
                found = true;
                break;
            }
        }
        if(found)
        return k;
        else
        {
            return nums.size();
        }
    }   
}; 