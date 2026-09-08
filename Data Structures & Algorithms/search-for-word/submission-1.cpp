class Solution {
public:
    bool recursion(vector<vector<char>>& board, string word, int k,int i,int j, int n, int m,vector<vector<int>> &visited){
        
        if(k==word.size()){
            return true;
        }


        if(i<0 || i>=n || j<0 || j>=m){
            return false;
        }

        if (!visited[i][j]){
        if(board[i][j]==word[k]){
            visited[i][j]=1;
            bool found =recursion(board,word,k+1,i-1,j,n,m,visited)|| recursion(board,word,k+1,i+1,j,n,m,visited)||          recursion(board,word,k+1,i,j-1,n,m,visited)||recursion(board,word,k+1,i,j+1,n,m,visited);    
            visited[i][j]=0;
            return found;
        } 
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        bool ans=false;
        int k=0;
        vector<vector<int>> visited(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
               ans= recursion(board,word,k,i,j,n,m,visited);
               if (ans){
                return ans;
               }
        }
        }
       
        return false;
    }
};
