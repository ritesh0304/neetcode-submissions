class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<string> strings;
        for(int i=0;i<s2.size();i++){
            string str="";
            for(int j=i;j<s2.size();j++){
                str+=s2[j];
                if (str.size()>s1.size()){
                    break;
                }
                strings.push_back(str);
            }
        }
       
        for(int i=0;i<strings.size();i++){
            int freq1[26]={0};
            int freq2[26]={0};
            string str=strings[i];
            for(int j=0;j<str.size();j++){
                freq1[str[j]-'a']++;
            }
            for(int j=0;j<s1.size();j++){
                freq2[s1[j]-'a']++;
            }
            bool flag=true;
            for(int j=0;j<26;j++){
                if (freq1[j]!=freq2[j]){
                    flag=false;
                    break;
                }
            }
            if (flag){
                return flag;
            }
        }
        return false;
    }
};
