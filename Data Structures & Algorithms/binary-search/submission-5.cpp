class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans=-1;
        int left=0; int right=nums.size()-1;
        while(left<=right){
            
            int middle=(left+right)/2;
            cout<<left<<" "<<right<<" "<<middle<<" "<<nums[middle]<<endl;

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



