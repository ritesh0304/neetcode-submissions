class Solution {
public:
    void recursion(vector<int>&nums,vector<vector<int>>&ans,vector<int>&sub,vector<bool>used){
        if(sub.size()==nums.size()){
        ans.push_back(sub);
        return ;
        }
        
        for(int i=0; i<nums.size();i++){
            if(used[i]){continue;}
            sub.push_back(nums[i]);
            used[i]=true;
            recursion(nums,ans,sub,used);
            sub.pop_back();
            used[i] = false;
        }
    }   
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>per;
        vector<bool>used(nums.size(),false);
        int i=0;
        recursion(nums,ans,per,used);   
        return ans;
    }
};
