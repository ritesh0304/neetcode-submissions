class Solution {
public:
    void recursion(vector<int>&nums,vector<int> temp,int&ans, int i){
        if (i == nums.size()) {
            int xorSum = 0;

            for (int j = 0; j < temp.size(); j++) {
                xorSum ^= temp[j];
            }

            ans += xorSum;
            return;
        }
        temp.push_back(nums[i]);
        recursion(nums,temp,ans,i+1);
        temp.pop_back();
        recursion(nums,temp,ans,i+1);
    }
    int subsetXORSum(vector<int>& nums) {
        int ans=0;
        vector<int> temp;
        recursion(nums,temp,ans,0);
        return ans;
    }
};