class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int i=0;i<stones.size();i++){
            q.push(stones[i]);
        }
        while(q.size()!=1 && !q.empty()){
            int x,y;
            x=q.top();q.pop();
            if(!q.empty()){
                y=q.top();q.pop();
            }           
            if(x==y){
                continue;
            }else{
                x=x-y;
                q.push(x);
            }
        }
        if(q.empty()){
            return 0;
        }
        return q.top();
    }
};
