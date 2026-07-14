class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     
     if(nums.size()==0 || nums.size()==1){
        return nums.size();
     }
     
     int maxCount=1;
     int count=1;
     unordered_map<int,int> m;
     for (auto x:nums){
        m[x]++;
     }
  
     for(int i=0;i<nums.size();i++){
        if(m.find(nums[i]-1)!=m.end()){
            count=1;
            continue;
        }else{
            int num=nums[i]+1;
            cout<<num<<" ";
            while(m.find(num)!=m.end()){
                num=num+1;
                cout<<num<<" ";
                count++;
            }
            cout<<endl;
            maxCount=max(count,maxCount);
              count=1;
        }
     }
     return maxCount;

    }
};
