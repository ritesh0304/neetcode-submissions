class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       int length = nums.size();
        vector<int> ans(2 * length, 0);
        int j=0;
        for ( int i=0; i<length*2;i++){
               
               ans[i]=nums[j];

               j++;
               if (j>=length){
                j=0;
               }
        }
        return ans;
    }
};