class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        for(;i<t.size();i++){
            if(t[i]==s[j]){
                j++;
            }
            if(j==s.size()){
                return true;;
            }
        }
        return false;
    }
};