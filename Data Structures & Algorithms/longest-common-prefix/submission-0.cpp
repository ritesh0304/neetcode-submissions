class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()<2){
               return strs[0];
        }
        /* 
        neet 
        feet 
        ans=neet
        ans1=""
        */

        string ans=strs[0];
        string ans1="";
        for ( int i=0; i<strs.size(); i++){
            for ( int j=0; j<strs[i].size(); j++ ){
                if (ans[j]==strs[i][j]){
                    ans1+=ans[j];
                    continue;
                }else{
                    break;
                }
            }
                ans=ans1;
                ans1="";
            cout<<ans<<ans1;
        }
        return ans;
    }
};