
   bool custofreqCofreqparison(pair<int,int> a, pair<int,int> b)
    {
    // Custofreq cofreqparison logic
    return a.second > b.second; // it sorts in ascending order
    }
class Solution {
public:


    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int>freqs;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        for (auto x:nums){
            freqs[x]++;
        }

for (auto x : freqs) {
    pq.push({x.second, x.first});

    if (pq.size() > k) {
        pq.pop();
    }
}



    while (!pq.empty()) {
    ans.push_back(pq.top().second);
    pq.pop();
    }
        return ans;
    }
};
