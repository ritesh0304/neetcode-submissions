class Solution {
public:
    void recursion(vector<int>&nums,vector<vector<int>>&ans,vector<int>&sub,int index){
        if(index ==nums.size()){
            ans.push_back(sub);
            return ;
        }
        sub.push_back(nums[index]);
        recursion(nums,ans,sub,index+1);
        sub.pop_back();
        recursion(nums,ans,sub,index+1);
    }   
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>sub;
        int i=0;
        recursion(nums,ans,sub,i);   
        return ans;
    }
};
