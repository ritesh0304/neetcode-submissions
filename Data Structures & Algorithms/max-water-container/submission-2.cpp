class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea=INT_MIN;
        int i=0; int j=heights.size()-1;
        while(i<j){
            int minHeight=min(heights[i],heights[j]);
            maxArea=max(maxArea,minHeight*(j-i));

            if (heights[i]<heights[j]){
                i++;
            }else{
                j--;
            }

        }
        return maxArea;
    }
};
