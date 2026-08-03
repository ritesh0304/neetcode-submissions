class TimeMap {
public :
    map<string,vector<pair<string,int>>> tm;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        tm[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        if(tm.find(key)==tm.end()){
            return "";
        }
        string ans="";
        vector<pair<string,int>> s=tm[key];
        int i=0; int j=s.size()-1;
        cout<<i<<" "<<j<<endl;
        while(i<=j){
        int middle=i+(j-i)/2;
        cout<<middle<<" ";
    	if(s[middle].second<=timestamp){
		    ans=s[middle].first;
			i=middle+1;
		}else if(s[middle].second>timestamp){
		    j=middle-1;
		}
	 }
      return ans;
    }
};
