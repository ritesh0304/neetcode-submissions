class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int> ans(nums.size(),0);
       for ( int i=0; i<nums.size();i++){
        int product=1;
        for(int j=0;j<nums.size();j++){
            if (j==i){
                continue;
            }
            product*=nums[j];
        }
        ans[i]=product;
       }
       return ans;
    }
};
