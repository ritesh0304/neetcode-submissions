class Solution {
public:
    void recursion(vector<vector<int>>&ans, vector<int>&nums, vector<int>sub, int index){
        if(index==nums.size()){
            ans.push_back(sub);
            return;
        }

        sub.push_back(nums[index]);
        recursion(ans,nums,sub,index+1);
        sub.pop_back();
    // Skip duplicates
    while (index < nums.size() - 1 &&
           nums[index] == nums[index + 1]) {
        index++;
    }
        recursion(ans,nums,sub,index+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>sub;
        sort(nums.begin(),nums.end());
        recursion(ans,nums,sub,0);
        return ans;
    }
};
