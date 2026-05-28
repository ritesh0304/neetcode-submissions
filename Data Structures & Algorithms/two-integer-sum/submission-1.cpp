class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map1;
        for ( int i=0; i<nums.size();i++){
            int need =target-nums[i];
            if (map1.find(need)!=map1.end()){
                auto pair=map1.find(need);
               return {map1[need], i};
            }
            map1[nums[i]]=i;
        }
    }
};
