class Solution {
public:
// 1 2 3  k=2
// i=0 temp=[1]
//     i=1 temp=[1,2]
//         i=2
    void recursion(vector<int>&nums,int k, vector<int>temp, int i,vector<vector<int>> &ans){
        if(temp.size() == k){
            ans.push_back(temp);
            return;
        }
        if(temp.size() > k){
            return;
        }
        if(i == nums.size()){
            return;
        }


        temp.push_back(nums[i]);
        recursion(nums,k,temp,i+1,ans);
        temp.pop_back();
        recursion(nums,k,temp,i+1,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        vector<vector<int>> ans;
        for(int i =1; i<=n;i++){
            nums.push_back(i);
        }
        vector<int>temp;
        recursion(nums,k,temp,0,ans);
        return ans;
    }
};