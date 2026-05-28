class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        bool flag=true;
        for ( int i=0; i<strs[0].size(); i++){
            char ch=strs[0][i];
            for ( int j=1; j<strs.size();j++){
                if (ch == strs[j][i]){
                    continue;
                }else{
                    flag=false;
                    break;
                }
            }
            if (flag){
               ans+=ch;
            }
        }
        return ans;
    }
};