class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> a(num1.length()+num2.length(),0);
        int prod = 0;
        int curr = 0;
        string res = "";
        if(num1 == "0" || num2 == "0")return "0";
        for(int i=num1.length()-1;i>=0;i--){
            for(int j=num2.length()-1;j>=0;j--){
                prod = (num1[i]-48)*(num2[j]-48);
                curr = a[i+j+1]+prod;
                a[i+j+1] = curr%10;
                a[i+j] +=curr/10;
            }
        }
        
        int k=0;
        if(a[0] ==0){
            k = 1;
        }
        for(int i=k;i<a.size();i++){
            res+=a[i]+'0';
        }
        return res;
    }
};