class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea=INT_MIN;
        for(int i=0;i<heights.size();i++){
            for(int j=i+1;j<heights.size();j++){
                int minHeight=min(heights[i],heights[j]);
                maxArea=max(maxArea,minHeight*(j-i));
            }
        }
        return maxArea;
    }
};
