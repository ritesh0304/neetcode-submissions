class Solution {
public:
    void reverse(vector<char>& s,int i,int j) {
      if (i>j){
        return ;
      }
      char ch = s[i];
      reverse(s,i+1,j-1);
      swap(s[i],s[j]);
    }
    void reverseString(vector<char>& s) {
        int i=0,j=s.size()-1;
        reverse(s,i,s.size()-1);
    }
};