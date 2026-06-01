class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map1;
        int ans=INT_MAX;
        bool answer=false;
        for (int i =0;i<nums.size();i++){
            if (map1.find(nums[i])==map1.end()){
                map1[nums[i]]=i;
                continue;
            }
            answer= abs(map1[nums[i]]-i)<=k;
            if (answer){
              return answer;
            }
            map1[nums[i]]=i;
        }
        return answer;
    }
};