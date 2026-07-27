class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int maxArea=INT_MIN;
        for(int i=0; i<n;i++){
            int k=i+1;
            int j=i-1;
            while(j>=0 && heights[i]<=heights[j] ){
                j--;
            }
            while(k<n && heights[i]<=heights[k]){
                k++;
            }
            int height=heights[i];
            int width= (k)-(j+1);
            maxArea=max(maxArea,height*width);
        }
        return maxArea;
    }
};
