class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> adj(n + 1);
        map<int,int>m;
        for(int i=0; i<trust.size();i++){
            int u=trust[i][0];
            int v=trust[i][1];
            adj[u].push_back(v);
            m[v]++;
        }
        int ans=0;
        for (int i = 1; i < adj.size(); i++) {
            if (adj[i].size() == 0 && m[i]==n-1) {
                return i;
            }
        }

        return -1;
    }
};