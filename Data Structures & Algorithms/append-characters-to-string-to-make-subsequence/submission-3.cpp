class Solution {
public:
    int isSubsequence(string s, string sub) {
        int i=0;
        int j=0;
        for(;i<s.size();i++){
            if(sub[j]==s[i]){
                j++;
            }
            if(j==sub.size()){
                return 0;;
            }
        }
        return sub.size()-j;
    }
    int appendCharacters(string s, string t) {
        int ans=isSubsequence(s,t);
        return ans;
    }
};