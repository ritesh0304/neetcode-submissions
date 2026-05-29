class Solution {
public:
bool isPal(string &s, int l, int r){
  while (l<r){
    if (s[l]!=s[r]){
        return false;
    }
    l++;
    r--;
  }
  return true;
}
//eceec
    bool validPalindrome(string s) {
        int i=0, j=s.length()-1;
        while (i<j){
            if (s[i]!=s[j]){
                cout<<i<<" "<<j<<endl;
                bool bool1=isPal(s,i+1,j);
                bool bool2=isPal(s,i,j-1);
                cout<<bool1<<bool2;
                return bool1 || bool2;
            }
            i++;
            j--;
        }
        return true;
    }
};

