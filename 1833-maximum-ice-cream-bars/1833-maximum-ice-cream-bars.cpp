class Solution {
public:
    int maxIceCream(vector<int>& v, int c) {
        sort(v.begin(),v.end());
        int ans = 0;
        for(int i=0;i<v.size();i++)
        {
            if(c>=v[i])
            {
                ans++;
                c -= v[i];
            }
            else
            {
                break;
            }
        }
        
        return ans;
    }
};