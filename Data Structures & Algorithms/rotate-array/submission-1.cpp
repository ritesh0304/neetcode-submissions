class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>ans(n,0);
        for( int i=0;i<n;i++){
            cout<<i<<" "<<(i+k)%n<<endl;
            ans[(i+k)%n]=nums[i];
        }
        for (int i=0;i<n;i++){
            nums[i]=ans[i];
        }
    }
};