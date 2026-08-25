class KthLargest {
public:
    int k;
    priority_queue<int,vector<int>,greater<int>>q;
    KthLargest(int k, vector<int>& nums) 
    {
        this->k=k;
         for(int i=0;i<nums.size();i++){
            if(q.size()<k){
                q.push(nums[i]);
            }else{
                q.push(nums[i]);
                q.pop();
            }
         }
    }
    
    int add(int val) {
    q.push(val);
       if (q.size() > k) {
            q.pop();
        }
        return q.top();
    }
};
