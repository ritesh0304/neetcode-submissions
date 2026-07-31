class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0; int right=nums.size()-1;
        while(left<=right){
            int middle=left+(right-left)/2;
            cout<<middle<<" ";
            if(nums[middle]==target){
                return middle;
            }else if(nums[middle]>nums[right] ){
                if (target>=nums[left] && target <nums[middle]){ 
                right=middle-1;
                }else{
                    left=middle+1;
                }
            }else{
                 if (target<=nums[right] && target >nums[middle]){ 
                left=middle+1;
                }else{
                    right=middle-1;
                }
            }
        }
        return -1;
    }
};
