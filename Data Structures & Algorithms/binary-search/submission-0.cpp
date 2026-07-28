class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans=-1;
        int left=0; int right=nums.size();
        while(left<=right){
            int middle=(left+right)/2;
            if (nums[middle]==target){
                return middle;
            }else if (nums[middle] > target){
                right=middle-1;
            }else{
                left=middle+1;
            }

        }

        return ans;
    }
};
// 0 1 2 
// 1 2 3 target =4;
// left = 2
// right = 4

// middle = 3 
// 2>3 false


