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
	    for(int i=0;i<s.size();i++){
		   if(s[i].second<=timestamp){
		    ans=s[i].first;
		  }
		 }
    	return ans;
	 }
    };
