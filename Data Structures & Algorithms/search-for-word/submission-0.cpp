class Solution {
public:
    void recursion(vector<vector<char>>& board, string word, int k,int i,int j, int n, int m,bool &ans,vector<vector<int>> &visited){
        
        if(k==word.size()){
            ans=true;
            return;
        }


        if(i<0 || i>=n || j<0 || j>=m){
            return ;
        }

        if (!visited[i][j]){
        if(board[i][j]==word[k]){
            visited[i][j]=1;
            recursion(board,word,k+1,i-1,j,n,m,ans,visited);
            recursion(board,word,k+1,i+1,j,n,m,ans,visited);
            recursion(board,word,k+1,i,j-1,n,m,ans,visited);
            recursion(board,word,k+1,i,j+1,n,m,ans,visited);    
            visited[i][j]=0;
        } 
        }
        return;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        bool ans=false;
        int k=0;
        vector<vector<int>> visited(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                recursion(board,word,k,i,j,n,m,ans,visited);
                if(ans==true){
                    return true;
                }
        }
        }
       
        return false;
    }
};
