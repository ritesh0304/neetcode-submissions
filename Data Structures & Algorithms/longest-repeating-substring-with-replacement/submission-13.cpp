class Solution {
public:
    int characterReplacement(string s, int k) {
        if (s.size()==0||s.size()==1){
            return s.size();
        }
        int maxCount=0;
        int maxFreq=0;
        int n=s.size();

        int i=0;
        int j=i;
        int freq[26]={0};

        while(j<s.size()){
freq[s[j] - 'A']++;
maxFreq = max(maxFreq, freq[s[j] - 'A']);

int length = j - i + 1;

if (length - maxFreq > k) {
    freq[s[i] - 'A']--;
    i++;
}

maxCount = max(maxCount, j - i + 1);
j++;
        }


        return maxCount;
    }
};
