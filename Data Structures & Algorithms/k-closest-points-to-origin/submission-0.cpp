class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& point, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<float,vector<int>>> q;
        for(int i=0; i<point.size();i++){
            float distance=sqrt(   pow((0-point[i][0]),2) + pow( (0-point[i][1]), 2)   );
            q.push( {distance,{point[i][0],   point[i][1]} });
            if(q.size()<=k){
                continue;
            }else{
                q.pop();
            }
        }

        while(!q.empty()){
            pair<float,vector<int>> top=q.top();q.pop();
            ans.push_back(top.second);
        }
        return ans;
    }
};
