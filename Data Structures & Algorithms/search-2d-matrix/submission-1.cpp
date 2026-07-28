class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans=false;
        int rowLength=matrix[0].size();
        int colLength=matrix.size();

        int top=0;
        int col=0;
        int bottom=colLength-1;
        while(top<=bottom){
            int middle=top + (bottom-top)/2;
            if(target >= matrix[middle][0] && target <=matrix[middle][rowLength-1]){
                col=middle;
                break;
            }else if (target>matrix[middle][rowLength-1]) {
                top=middle+1;
            }else{
                bottom=middle-1;
            }
        }

        if (col>=colLength){
            return false;
        }
        int left=0;
        int right=rowLength-1;
        while(left<=right){
            int middle = left + (right - left) / 2;
            if(matrix[col][middle]==target){
                return true;
            }else if(matrix[col][middle]>target){
                right=middle-1;
            }else{
                left=middle+1;
            }
        }

        return ans;
    }
};
