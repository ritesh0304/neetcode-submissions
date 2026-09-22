class Solution {
public:
    void recursion(vector<vector<int>>& image, int sr, int sc, int color, int n, int m,vector<vector<int>> &visited,int samePixel){
        if(sr>=n || sr<0 || sc>=m || sc<0){
            return ;
        }
        if (visited[sr][sc]){
            return;
        }
        if(image[sr][sc]==color){
            return;
        }
        if (image[sr][sc]!=samePixel){
            return;
        }
        image[sr][sc]=color;
        visited[sr][sc]=1;
        recursion(image,sr-1,sc,color,n,m,visited,samePixel);
        recursion(image,sr+1,sc,color,n,m,visited,samePixel);
        recursion(image,sr,sc+1,color,n,m,visited,samePixel);
        recursion(image,sr,sc-1,color,n,m,visited,samePixel);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int samePixel=image[sr][sc];
        recursion(image,sr,sc,color,n,m,visited,samePixel);
        return image;
    }
};