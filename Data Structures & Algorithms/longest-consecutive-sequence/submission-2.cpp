class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if (nums.size()==0 || nums.size()==1){
            return nums.size();
        }
        sort(nums.begin(), nums.end());

        int maxCount=1;
        int count=1;
        int i=0,j=1;
        while(j<nums.size()){
            if (nums[i]==nums[j]){
                j++;
                continue;
            }
            if (nums[j]==nums[i]+1){
                i=j;
                j++;
                count++;
                maxCount=max(count,maxCount);
            }else{
                i=j;
                j++;
                count=1;
            }
        }
        return maxCount;
    }
};
