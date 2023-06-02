

class Solution {
public:
   bool isnice(string str){
      map<int,bool>map;
//create a map to track the all letter if letter is persent so we can put true in map
     for(int i=0;i<str.length();i++){
            int p = str[i];//its a method to get the ascii value of any charachter 

             map[p]=true;
     }

     for(int i=0;i<str.length();i++){
         int q=str[i];//its a method to get the ascii value of any charachter 
         if(isupper(str[i])){
             //if letter is uppercase then we wil check for its lowercae letter from map ascii value of any lowercase letter is 32 more then ascii value of the uppercase letter
             int z=q+32;
             if(!(map[z])){
                 // if asci valueof uppercaseletter=32 is not persent in the map we return false
                 return false;
             }
         }
         else{
              int z=q-32;
             if(!(map[z])){
                 return false;
             }
         }       
    }
    //if we check all the string and false is not return we will return true
     return true;
   }

    string longestNiceSubstring(string s) {
    string ans="";
    //initialize ans string as empty string so if we dont get any nice string we can return that empty string
     for(int i=0;i<s.length();i++){
         for(int j=0;j<=s.length();j++){
        //these two for loop for get all the possible sub string
            string str = s.substr(i,j);  
 //  s.substr(i,j); predefine function to get a substring take argumnet as index(where the substring start) and length (of the substring)  
            if(isnice(str)){  
                //isnice is function to check all the substring is nice or not
                   if(str.length()>ans.length()){
                       // if we found substring that is nice we can compare with the ans if ans is smaller string we can update our ans
                     ans = str;
                  }
              }
         }
     }
        
     return ans;    
    }
};