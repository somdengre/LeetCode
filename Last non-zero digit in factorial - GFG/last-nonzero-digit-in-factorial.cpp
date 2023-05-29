//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
public:
    
    int lastNon0Digit(int n)
    {
        // Code Here
       long long int fact=1,rem;
long long int count;
for(int i=1;i<=n;i++)
{
fact = fact*i;
while(fact%10==0)
fact = fact/10;
fact%=1000000000;
}
return fact%10;
    }
    
};


//{ Driver Code Starts.


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		cout<< ob.lastNon0Digit(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends