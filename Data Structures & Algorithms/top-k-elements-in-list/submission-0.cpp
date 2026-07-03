
   bool customComparison(pair<int,int> a, pair<int,int> b)
    {
    // Custom comparison logic
    return a.second > b.second; // it sorts in ascending order
    }
class Solution {
public:


    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        vector<pair<int,int>>ans1;
        map<int,int>m;
        for (auto x:nums){
            m[x]++;
        }
        for (auto x:m){
            cout<<x.first<<" "<<x.second<<endl;
        }
        for (auto x:m){
            ans1.push_back({x.first,x.second});
        }

        sort(ans1.begin(), ans1.end(), customComparison);

        int n=ans1.size();
        // n=3, k=2; i=3-2
        for ( int i=0; i<k; i++){
            ans.push_back(ans1[i].first);
        }
        return ans;
    }
};
