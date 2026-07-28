class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans=-1;
        int left=0; int right=nums.size();
        while(left<right){
            int middle=(left+right)/2;
            if (nums[middle]==target){
                return middle;
            }else if (nums[middle] > target){
                right=middle;
            }else{
                left=middle+1;
            }

        }

        return ans;
    }
};



