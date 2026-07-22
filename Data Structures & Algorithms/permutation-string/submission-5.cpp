class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size()>s2.size()){
            return false;
        }
        int k=s1.size();
        int freq1[26]={0};
        int freq2[26]={0};
        int i=0;
        while(i<k){
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
            i++;
        }
        bool flag = true;
        for(int k = 0; k < 26; k++){
        if(freq1[k] != freq2[k]){
          flag = false;
          break;
         }
        }
        if(flag) return true;
        
        int j=k;
        i=0;
        freq2[s2[i]-'a']--;
        i++;
        while(j<s2.size()){
            freq2[s2[j]-'a']++;
            bool flag = true;
            for(int x = 0; x < 26; x++){
                if(freq1[x] != freq2[x]){
                flag = false;
                break;
            }
        }
        if(flag) return true;
        freq2[s2[i]-'a']--;
        i++;j++;
        }
        return false;
    }
};
