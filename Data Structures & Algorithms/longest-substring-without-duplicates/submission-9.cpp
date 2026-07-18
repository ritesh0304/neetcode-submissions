class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int maxCount=0;
        if (s.size()==0|| s.size()==1){
            return s.size();
        }

        int i=0;
        int j=0;
        int freq[128] = {0};

        while(j<s.size()){
            if (freq[s[j]]==0){
                freq[s[j]]++;
                maxCount=max(j-i+1,maxCount);
            }else{
             while(i<j){
                if (freq[s[i]]!=0 && s[i]!=s[j]){
                    freq[s[i]]--;
                    i++;
                }else{
                   break;
                }
             }
             i++;
            }
            
            j++;
        }
        return maxCount;
    }
};
