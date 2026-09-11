class Solution {
public:

// 1 1 2
// i=0  temp[1]
//     i=1 temp[1,1]
//         i=2 temp[1,1,2]
//             i=3 return; ans=[{1,1,2}]
//         i=2 temp[1,1]




    void recursion(vector<int>&nums,vector<vector<int>>&ans,vector<int>temp, vector<bool> &used){

        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }

        for( int i=0 ;i<nums.size();i++){
            if(used[i]){
                continue;
            }
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) {
                continue;
            }
            used[i]=true;
            temp.push_back(nums[i]);
            recursion(nums,ans,temp,used);
            temp.pop_back();
            used[i]=false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int>temp;
        vector<bool> used(nums.size(), false);
        // for(int i=0; i<nums.size();i++){
           
        // }
         recursion(nums,ans,temp,used);
            return ans;
    }
};