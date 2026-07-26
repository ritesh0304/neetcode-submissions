class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
       vector<pair<int,int>> v;
        for(int i=0;i<position.size();i++){
            pair<int,int>p={position[i],speed[i]};
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        stack<double> st;

        for(int i=v.size()-1;i>=0;i--){
            double rem=target-v[i].first;
            double time=rem/v[i].second;
            if(!st.empty()){
                if(st.top()<time){
                    st.push(time);
                }
            }else{
                st.push(time);
            }
        }
        return st.size();

    }
};
