class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int maxCount=0;
        if (s.size()==0|| s.size()==1){
            return s.size();
        }

        for(int i=0;i<s.size();i++){
            int freq[128] = {0};
            int count=0;
            int j=i;
            while (j < s.size()) {
              if (freq[s[j]])
                break;
             freq[s[j]]++;
            j++;
            }

            count = j - i;
            maxCount=max(count,maxCount);
        }
        return maxCount;
    }
};
