class Solution {
public:
    bool isPalindrome(string s) {
        // string str="";
        // for ( int i=0; i<s.length();i++){
        //   if (s[i]>=65 && s[i]<=90){
        //     char ch=s[i]+32;
        //     str+=ch;
        //     continue;
        //   }
        //   if ( (s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57)){
        //     str+=s[i];
        //   }
        // }
        int i=0, j=s.length()-1;
        while (i<j){
          if (s[i]>=65 && s[i]<=90){
          s[i]=s[i]+32;
          }
          if (s[j]>=65 && s[j]<=90){
          s[j]=s[j]+32;
          }
          if ( (s[i]<97 || s[i]>122) && (s[i]<48 || s[i]>57)){
            i++;
            continue;
          }
          if ( (s[j]<97 || s[j]>122) && (s[j]<48 || s[j]>57)){
            j--;
            continue;
          }
          if (s[i]!=s[j]){
            return false;
          }
          i++;j--;
        }
        return true;
    }
};
