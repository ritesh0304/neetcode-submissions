class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxCount=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int freq[26]={0};
            int maxFreq=0;

            for (int j=i;j<n;j++){
                freq[s[j]-'A']++;
                maxFreq=max(maxFreq,freq[s[j]-'A']);
                int length=j-i+1;
                if (length-maxFreq > k){
                    break;
                }
                
                maxCount=max(maxCount,maxFreq+length-maxFreq);
            }
        }
        return maxCount;
    }
};
