class Solution {
public:
    void recursion(vector<string>&ans,int n, int open, int close, string temp){
        if(close==open && open==n){
            ans.push_back(temp);
            return;
        }
        if(close > open){
            return;
        }
        if(open>n || close > n){
            return;
        }
        temp+="(";
        recursion(ans,n,open+1,close,temp);
        temp.pop_back();
        temp+=")";
        recursion(ans,n,open,close+1,temp);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open=0, close=0;
        string temp="";
        recursion(ans,n,open,close,temp);
        return ans;
    }
};
