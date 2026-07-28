class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans=false;
        int rowLength=matrix[0].size();
        int colLength=matrix.size();

        int col=0;
        while(col<colLength){
            if(target >= matrix[col][0] && target <=matrix[col][rowLength-1]){
                break;
            }else{
                col++;
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
