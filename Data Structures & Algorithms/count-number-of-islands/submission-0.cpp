class Solution {
public:
    void recursion(vector<vector<char>>& grid,vector<vector<int>>&visited,int &n,int &m,int &ans,int i, int j){
        if(i>=n || i<0 || j>=m ||j<0){
            return;
        }
        if(grid[i][j]=='0'){
            return;
        }
        if(visited[i][j]){
            return;
        }

        visited[i][j]=1;
        recursion(grid,visited,n,m,ans,i-1,j);
        recursion(grid,visited,n,m,ans,i,j-1);
        recursion(grid,visited,n,m,ans,i,j+1);
        recursion(grid,visited,n,m,ans,i+1,j);
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(); 
        int m = grid[0].size(); 

        vector<vector<int>> visited(n, vector<int>(m, 0)); 

        int ans = 0; 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && visited[i][j]==0) {
                    cout<<i<<" "<<j<<endl;
                    ans++;
                    recursion(grid, visited, n, m, ans, i, j);
                }
            }
        }
        return ans;
    }
};
