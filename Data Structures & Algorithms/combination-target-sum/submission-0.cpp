class Solution {
public:

    void recursion(vector<vector<int>>&ans, vector<int>&nums, int index, int target,vector<int> temp, int &sum)  {
        if(index>=nums.size()){
            return ;
        }
if(sum > target) return;
        for(int j=index; j<nums.size();j++){
            temp.push_back(nums[j]);
            sum += nums[j];

            if(sum == target) {
                ans.push_back(temp);
            }
            recursion(ans,nums,j,target,temp,sum);
            temp.pop_back();
            sum -= nums[j];
        }

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum=0;int i=0;
        recursion(ans,nums,i,target,temp,sum);
        return ans;
    }
};
