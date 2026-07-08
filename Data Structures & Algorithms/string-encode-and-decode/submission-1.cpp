class Solution {
public:

    string encode(vector<string>& strs) {
        string delim="#";
        string ans="";
        for ( int i=0; i<strs.size();i++){
           int length=strs[i].size();
           string slength=to_string(length);
           ans+=slength;
           ans+=delim;
           ans+=strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
       vector<string>ans;
       cout<<s<<endl;
      // 5#Hello5#World
       int i=0;
       while(i<s.length()){
          string temp="";
          string length="";
        while (s[i]>='0' && s[i]<='9'){
          length+=s[i];
          i++;
        }
          int iLength=stoi(length);
          i++;
          int j=0;
          while (j<iLength){
            temp+=s[i];
            i++;
            j++;
          }
          ans.push_back(temp);
       }
       return ans;
    }
};
