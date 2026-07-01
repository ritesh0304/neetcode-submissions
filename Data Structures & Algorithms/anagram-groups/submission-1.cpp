class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>>  ans;
        map<string, vector<string>> m;

         for ( int i=0; i<strs.size();i++){
            string s=strs[i];
            int characters[26];
               for (int i=0; i<26;i++){
                characters[i]=0;
               }
            for (int i=0; i<s.size();i++){
               characters[s[i]-'a']++;
            }

            string key="";
            for (int i=0; i<26;i++){
               key+=to_string(characters[i]);
               key+="#";
            }

            m[key].push_back(strs[i]);
         }
         // n*nlogn;

         for (auto x:m){
            ans.push_back(x.second);
         }
         return ans;
    }
};
